import SwiftUI

struct RendezVous: Identifiable {
    let id: String
    let date: String
    let time: String
    let problem: String
    let etat: Int
}

struct affichBookings: View {
    @State private var rendezVousList: [RendezVous] = [
        // Sample Data
        RendezVous(id: "1", date: "2024-12-03", time: "10:00 AM", problem: "Engine issue", etat: 0),
        RendezVous(id: "2", date: "2024-12-05", time: "2:00 PM", problem: "Tire replacement", etat: 1),
        RendezVous(id: "3", date: "2024-12-07", time: "11:00 AM", problem: "Battery check", etat: 2)
    ]
    @State private var bookings: [Booking] = []
    @EnvironmentObject var viewModel: ViewModel
    @State var errormessage :String = ""
    
    var todayRendezVous: [Booking] {
          // Get today's date as a string
          let formatter = DateFormatter()
          formatter.dateFormat = "yyyy-MM-dd"
          let todayDate = formatter.string(from: Date())
          
          // Filter appointments for today
          return bookings.filter { $0.date == todayDate }
      }



    var body: some View {


                // Foreground Content
                NavigationView {
                    ScrollView {
                        LazyVStack(spacing: 16) {
                            ForEach(todayRendezVous, id: \.id) { booking in                                RendezVousCard(rendezVous: booking)
                            }
                        }
                        .padding()
                    }
                    .background(Color.clear) // Set background of scroll view to transparent
                    .navigationTitle("All Rendez-Vous")
                }
            
        .onAppear {
        viewModel.Bookings() { isSuccess in
            DispatchQueue.main.async {
                if isSuccess! {
                    bookings = viewModel.bookings
                } else {
                    errormessage = "Failed to load bookings"
                }
            }
        }
     
    }
    }
        
}



struct RendezVousCard: View {
    let rendezVous: Booking

    var body: some View {
        VStack(alignment: .leading, spacing: 8) {
            HStack {
                Text(rendezVous.date)
                    .font(.headline)
                    .foregroundColor(.secondary)
                Spacer()
                Text(rendezVous.time)
                    .font(.subheadline)
                    .foregroundColor(.secondary)
            }

            Text(rendezVous.problem)
                .font(.title3)
                .fontWeight(.bold)
                .foregroundColor(.primary)

            HStack {
                Text(statusText(for: rendezVous.etat))
                    .font(.caption)
                    .foregroundColor(statusColor(for: rendezVous.etat))
                    .padding(6)
                    .background(statusColor(for: rendezVous.etat).opacity(0.1))
                    .cornerRadius(8)
                Spacer()
            }
        }
        .padding()
        .background(Color(UIColor.systemBackground))
        .cornerRadius(12)
        .shadow(color: Color.black.opacity(0.1), radius: 8, x: 0, y: 4)
    }

    // Helper to determine status text
    private func statusText(for etat: Int) -> String {
        switch etat {
        case 0: return "Pending"
        case 1: return "Accepted"
        case 2: return "Rejected"
        default: return "Unknown"
        }
    }

    // Helper to determine status color
    private func statusColor(for etat: Int) -> Color {
        switch etat {
        case 0: return .yellow
        case 1: return .green
        case 2: return .red
        default: return .gray
        }
    }
}

struct RendezVousListView_Previews: PreviewProvider {
    static var previews: some View {
        affichBookings()
    }
}
