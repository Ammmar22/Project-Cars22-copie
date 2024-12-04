struct Booking: Codable {
    let id: String
    let userId: String

    let date: String
    let time: String
    let problem: String
    var etat: Int
    let v: Int
    var mechanicId:String


    // Map the property names to JSON keys if needed
    enum CodingKeys: String, CodingKey {
        case id = "_id"
        case userId, date,time, problem, etat,mechanicId
        case v = "__v"
    }
}
