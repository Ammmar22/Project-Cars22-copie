/* This file was generated by upb_generator from the input file:
 *
 *     envoy/config/endpoint/v3/load_report.proto
 *
 * Do not edit -- your changes will be discarded when the file is
 * regenerated. */

#include "upb/reflection/def.h"
#include "envoy/config/endpoint/v3/load_report.upbdefs.h"
#include "envoy/config/endpoint/v3/load_report.upb_minitable.h"

extern _upb_DefPool_Init envoy_config_core_v3_address_proto_upbdefinit;
extern _upb_DefPool_Init envoy_config_core_v3_base_proto_upbdefinit;
extern _upb_DefPool_Init google_protobuf_duration_proto_upbdefinit;
extern _upb_DefPool_Init google_protobuf_struct_proto_upbdefinit;
extern _upb_DefPool_Init xds_annotations_v3_status_proto_upbdefinit;
extern _upb_DefPool_Init udpa_annotations_status_proto_upbdefinit;
extern _upb_DefPool_Init udpa_annotations_versioning_proto_upbdefinit;
extern _upb_DefPool_Init validate_validate_proto_upbdefinit;
static const char descriptor[3123] = {'\n', '*', 'e', 'n', 'v', 'o', 'y', '/', 'c', 'o', 'n', 'f', 'i', 'g', '/', 'e', 'n', 'd', 'p', 'o', 'i', 'n', 't', '/', 'v', 
'3', '/', 'l', 'o', 'a', 'd', '_', 'r', 'e', 'p', 'o', 'r', 't', '.', 'p', 'r', 'o', 't', 'o', '\022', '\030', 'e', 'n', 'v', 'o', 
'y', '.', 'c', 'o', 'n', 'f', 'i', 'g', '.', 'e', 'n', 'd', 'p', 'o', 'i', 'n', 't', '.', 'v', '3', '\032', '\"', 'e', 'n', 'v', 
'o', 'y', '/', 'c', 'o', 'n', 'f', 'i', 'g', '/', 'c', 'o', 'r', 'e', '/', 'v', '3', '/', 'a', 'd', 'd', 'r', 'e', 's', 's', 
'.', 'p', 'r', 'o', 't', 'o', '\032', '\037', 'e', 'n', 'v', 'o', 'y', '/', 'c', 'o', 'n', 'f', 'i', 'g', '/', 'c', 'o', 'r', 'e', 
'/', 'v', '3', '/', 'b', 'a', 's', 'e', '.', 'p', 'r', 'o', 't', 'o', '\032', '\036', 'g', 'o', 'o', 'g', 'l', 'e', '/', 'p', 'r', 
'o', 't', 'o', 'b', 'u', 'f', '/', 'd', 'u', 'r', 'a', 't', 'i', 'o', 'n', '.', 'p', 'r', 'o', 't', 'o', '\032', '\034', 'g', 'o', 
'o', 'g', 'l', 'e', '/', 'p', 'r', 'o', 't', 'o', 'b', 'u', 'f', '/', 's', 't', 'r', 'u', 'c', 't', '.', 'p', 'r', 'o', 't', 
'o', '\032', '\037', 'x', 'd', 's', '/', 'a', 'n', 'n', 'o', 't', 'a', 't', 'i', 'o', 'n', 's', '/', 'v', '3', '/', 's', 't', 'a', 
't', 'u', 's', '.', 'p', 'r', 'o', 't', 'o', '\032', '\035', 'u', 'd', 'p', 'a', '/', 'a', 'n', 'n', 'o', 't', 'a', 't', 'i', 'o', 
'n', 's', '/', 's', 't', 'a', 't', 'u', 's', '.', 'p', 'r', 'o', 't', 'o', '\032', '!', 'u', 'd', 'p', 'a', '/', 'a', 'n', 'n', 
'o', 't', 'a', 't', 'i', 'o', 'n', 's', '/', 'v', 'e', 'r', 's', 'i', 'o', 'n', 'i', 'n', 'g', '.', 'p', 'r', 'o', 't', 'o', 
'\032', '\027', 'v', 'a', 'l', 'i', 'd', 'a', 't', 'e', '/', 'v', 'a', 'l', 'i', 'd', 'a', 't', 'e', '.', 'p', 'r', 'o', 't', 'o', 
'\"', '\305', '\010', '\n', '\025', 'U', 'p', 's', 't', 'r', 'e', 'a', 'm', 'L', 'o', 'c', 'a', 'l', 'i', 't', 'y', 'S', 't', 'a', 't', 
's', '\022', ':', '\n', '\010', 'l', 'o', 'c', 'a', 'l', 'i', 't', 'y', '\030', '\001', ' ', '\001', '(', '\013', '2', '\036', '.', 'e', 'n', 'v', 
'o', 'y', '.', 'c', 'o', 'n', 'f', 'i', 'g', '.', 'c', 'o', 'r', 'e', '.', 'v', '3', '.', 'L', 'o', 'c', 'a', 'l', 'i', 't', 
'y', 'R', '\010', 'l', 'o', 'c', 'a', 'l', 'i', 't', 'y', '\022', ':', '\n', '\031', 't', 'o', 't', 'a', 'l', '_', 's', 'u', 'c', 'c', 
'e', 's', 's', 'f', 'u', 'l', '_', 'r', 'e', 'q', 'u', 'e', 's', 't', 's', '\030', '\002', ' ', '\001', '(', '\004', 'R', '\027', 't', 'o', 
't', 'a', 'l', 'S', 'u', 'c', 'c', 'e', 's', 's', 'f', 'u', 'l', 'R', 'e', 'q', 'u', 'e', 's', 't', 's', '\022', ';', '\n', '\032', 
't', 'o', 't', 'a', 'l', '_', 'r', 'e', 'q', 'u', 'e', 's', 't', 's', '_', 'i', 'n', '_', 'p', 'r', 'o', 'g', 'r', 'e', 's', 
's', '\030', '\003', ' ', '\001', '(', '\004', 'R', '\027', 't', 'o', 't', 'a', 'l', 'R', 'e', 'q', 'u', 'e', 's', 't', 's', 'I', 'n', 'P', 
'r', 'o', 'g', 'r', 'e', 's', 's', '\022', '0', '\n', '\024', 't', 'o', 't', 'a', 'l', '_', 'e', 'r', 'r', 'o', 'r', '_', 'r', 'e', 
'q', 'u', 'e', 's', 't', 's', '\030', '\004', ' ', '\001', '(', '\004', 'R', '\022', 't', 'o', 't', 'a', 'l', 'E', 'r', 'r', 'o', 'r', 'R', 
'e', 'q', 'u', 'e', 's', 't', 's', '\022', '2', '\n', '\025', 't', 'o', 't', 'a', 'l', '_', 'i', 's', 's', 'u', 'e', 'd', '_', 'r', 
'e', 'q', 'u', 'e', 's', 't', 's', '\030', '\010', ' ', '\001', '(', '\004', 'R', '\023', 't', 'o', 't', 'a', 'l', 'I', 's', 's', 'u', 'e', 
'd', 'R', 'e', 'q', 'u', 'e', 's', 't', 's', '\022', 'B', '\n', '\030', 't', 'o', 't', 'a', 'l', '_', 'a', 'c', 't', 'i', 'v', 'e', 
'_', 'c', 'o', 'n', 'n', 'e', 'c', 't', 'i', 'o', 'n', 's', '\030', '\t', ' ', '\001', '(', '\004', 'B', '\010', '\322', '\306', '\244', '\341', '\006', 
'\002', '\010', '\001', 'R', '\026', 't', 'o', 't', 'a', 'l', 'A', 'c', 't', 'i', 'v', 'e', 'C', 'o', 'n', 'n', 'e', 'c', 't', 'i', 'o', 
'n', 's', '\022', '<', '\n', '\025', 't', 'o', 't', 'a', 'l', '_', 'n', 'e', 'w', '_', 'c', 'o', 'n', 'n', 'e', 'c', 't', 'i', 'o', 
'n', 's', '\030', '\n', ' ', '\001', '(', '\004', 'B', '\010', '\322', '\306', '\244', '\341', '\006', '\002', '\010', '\001', 'R', '\023', 't', 'o', 't', 'a', 'l', 
'N', 'e', 'w', 'C', 'o', 'n', 'n', 'e', 'c', 't', 'i', 'o', 'n', 's', '\022', '>', '\n', '\026', 't', 'o', 't', 'a', 'l', '_', 'f', 
'a', 'i', 'l', '_', 'c', 'o', 'n', 'n', 'e', 'c', 't', 'i', 'o', 'n', 's', '\030', '\013', ' ', '\001', '(', '\004', 'B', '\010', '\322', '\306', 
'\244', '\341', '\006', '\002', '\010', '\001', 'R', '\024', 't', 'o', 't', 'a', 'l', 'F', 'a', 'i', 'l', 'C', 'o', 'n', 'n', 'e', 'c', 't', 'i', 
'o', 'n', 's', '\022', 'a', '\n', '\017', 'c', 'p', 'u', '_', 'u', 't', 'i', 'l', 'i', 'z', 'a', 't', 'i', 'o', 'n', '\030', '\014', ' ', 
'\001', '(', '\013', '2', '8', '.', 'e', 'n', 'v', 'o', 'y', '.', 'c', 'o', 'n', 'f', 'i', 'g', '.', 'e', 'n', 'd', 'p', 'o', 'i', 
'n', 't', '.', 'v', '3', '.', 'U', 'n', 'n', 'a', 'm', 'e', 'd', 'E', 'n', 'd', 'p', 'o', 'i', 'n', 't', 'L', 'o', 'a', 'd', 
'M', 'e', 't', 'r', 'i', 'c', 'S', 't', 'a', 't', 's', 'R', '\016', 'c', 'p', 'u', 'U', 't', 'i', 'l', 'i', 'z', 'a', 't', 'i', 
'o', 'n', '\022', 'a', '\n', '\017', 'm', 'e', 'm', '_', 'u', 't', 'i', 'l', 'i', 'z', 'a', 't', 'i', 'o', 'n', '\030', '\r', ' ', '\001', 
'(', '\013', '2', '8', '.', 'e', 'n', 'v', 'o', 'y', '.', 'c', 'o', 'n', 'f', 'i', 'g', '.', 'e', 'n', 'd', 'p', 'o', 'i', 'n', 
't', '.', 'v', '3', '.', 'U', 'n', 'n', 'a', 'm', 'e', 'd', 'E', 'n', 'd', 'p', 'o', 'i', 'n', 't', 'L', 'o', 'a', 'd', 'M', 
'e', 't', 'r', 'i', 'c', 'S', 't', 'a', 't', 's', 'R', '\016', 'm', 'e', 'm', 'U', 't', 'i', 'l', 'i', 'z', 'a', 't', 'i', 'o', 
'n', '\022', 'q', '\n', '\027', 'a', 'p', 'p', 'l', 'i', 'c', 'a', 't', 'i', 'o', 'n', '_', 'u', 't', 'i', 'l', 'i', 'z', 'a', 't', 
'i', 'o', 'n', '\030', '\016', ' ', '\001', '(', '\013', '2', '8', '.', 'e', 'n', 'v', 'o', 'y', '.', 'c', 'o', 'n', 'f', 'i', 'g', '.', 
'e', 'n', 'd', 'p', 'o', 'i', 'n', 't', '.', 'v', '3', '.', 'U', 'n', 'n', 'a', 'm', 'e', 'd', 'E', 'n', 'd', 'p', 'o', 'i', 
'n', 't', 'L', 'o', 'a', 'd', 'M', 'e', 't', 'r', 'i', 'c', 'S', 't', 'a', 't', 's', 'R', '\026', 'a', 'p', 'p', 'l', 'i', 'c', 
'a', 't', 'i', 'o', 'n', 'U', 't', 'i', 'l', 'i', 'z', 'a', 't', 'i', 'o', 'n', '\022', ']', '\n', '\021', 'l', 'o', 'a', 'd', '_', 
'm', 'e', 't', 'r', 'i', 'c', '_', 's', 't', 'a', 't', 's', '\030', '\005', ' ', '\003', '(', '\013', '2', '1', '.', 'e', 'n', 'v', 'o', 
'y', '.', 'c', 'o', 'n', 'f', 'i', 'g', '.', 'e', 'n', 'd', 'p', 'o', 'i', 'n', 't', '.', 'v', '3', '.', 'E', 'n', 'd', 'p', 
'o', 'i', 'n', 't', 'L', 'o', 'a', 'd', 'M', 'e', 't', 'r', 'i', 'c', 'S', 't', 'a', 't', 's', 'R', '\017', 'l', 'o', 'a', 'd', 
'M', 'e', 't', 'r', 'i', 'c', 'S', 't', 'a', 't', 's', '\022', 'g', '\n', '\027', 'u', 'p', 's', 't', 'r', 'e', 'a', 'm', '_', 'e', 
'n', 'd', 'p', 'o', 'i', 'n', 't', '_', 's', 't', 'a', 't', 's', '\030', '\007', ' ', '\003', '(', '\013', '2', '/', '.', 'e', 'n', 'v', 
'o', 'y', '.', 'c', 'o', 'n', 'f', 'i', 'g', '.', 'e', 'n', 'd', 'p', 'o', 'i', 'n', 't', '.', 'v', '3', '.', 'U', 'p', 's', 
't', 'r', 'e', 'a', 'm', 'E', 'n', 'd', 'p', 'o', 'i', 'n', 't', 'S', 't', 'a', 't', 's', 'R', '\025', 'u', 'p', 's', 't', 'r', 
'e', 'a', 'm', 'E', 'n', 'd', 'p', 'o', 'i', 'n', 't', 'S', 't', 'a', 't', 's', '\022', '\032', '\n', '\010', 'p', 'r', 'i', 'o', 'r', 
'i', 't', 'y', '\030', '\006', ' ', '\001', '(', '\r', 'R', '\010', 'p', 'r', 'i', 'o', 'r', 'i', 't', 'y', ':', '2', '\232', '\305', '\210', '\036', 
'-', '\n', '+', 'e', 'n', 'v', 'o', 'y', '.', 'a', 'p', 'i', '.', 'v', '2', '.', 'e', 'n', 'd', 'p', 'o', 'i', 'n', 't', '.', 
'U', 'p', 's', 't', 'r', 'e', 'a', 'm', 'L', 'o', 'c', 'a', 'l', 'i', 't', 'y', 'S', 't', 'a', 't', 's', '\"', '\367', '\003', '\n', 
'\025', 'U', 'p', 's', 't', 'r', 'e', 'a', 'm', 'E', 'n', 'd', 'p', 'o', 'i', 'n', 't', 'S', 't', 'a', 't', 's', '\022', '7', '\n', 
'\007', 'a', 'd', 'd', 'r', 'e', 's', 's', '\030', '\001', ' ', '\001', '(', '\013', '2', '\035', '.', 'e', 'n', 'v', 'o', 'y', '.', 'c', 'o', 
'n', 'f', 'i', 'g', '.', 'c', 'o', 'r', 'e', '.', 'v', '3', '.', 'A', 'd', 'd', 'r', 'e', 's', 's', 'R', '\007', 'a', 'd', 'd', 
'r', 'e', 's', 's', '\022', '3', '\n', '\010', 'm', 'e', 't', 'a', 'd', 'a', 't', 'a', '\030', '\006', ' ', '\001', '(', '\013', '2', '\027', '.', 
'g', 'o', 'o', 'g', 'l', 'e', '.', 'p', 'r', 'o', 't', 'o', 'b', 'u', 'f', '.', 'S', 't', 'r', 'u', 'c', 't', 'R', '\010', 'm', 
'e', 't', 'a', 'd', 'a', 't', 'a', '\022', ':', '\n', '\031', 't', 'o', 't', 'a', 'l', '_', 's', 'u', 'c', 'c', 'e', 's', 's', 'f', 
'u', 'l', '_', 'r', 'e', 'q', 'u', 'e', 's', 't', 's', '\030', '\002', ' ', '\001', '(', '\004', 'R', '\027', 't', 'o', 't', 'a', 'l', 'S', 
'u', 'c', 'c', 'e', 's', 's', 'f', 'u', 'l', 'R', 'e', 'q', 'u', 'e', 's', 't', 's', '\022', ';', '\n', '\032', 't', 'o', 't', 'a', 
'l', '_', 'r', 'e', 'q', 'u', 'e', 's', 't', 's', '_', 'i', 'n', '_', 'p', 'r', 'o', 'g', 'r', 'e', 's', 's', '\030', '\003', ' ', 
'\001', '(', '\004', 'R', '\027', 't', 'o', 't', 'a', 'l', 'R', 'e', 'q', 'u', 'e', 's', 't', 's', 'I', 'n', 'P', 'r', 'o', 'g', 'r', 
'e', 's', 's', '\022', '0', '\n', '\024', 't', 'o', 't', 'a', 'l', '_', 'e', 'r', 'r', 'o', 'r', '_', 'r', 'e', 'q', 'u', 'e', 's', 
't', 's', '\030', '\004', ' ', '\001', '(', '\004', 'R', '\022', 't', 'o', 't', 'a', 'l', 'E', 'r', 'r', 'o', 'r', 'R', 'e', 'q', 'u', 'e', 
's', 't', 's', '\022', '2', '\n', '\025', 't', 'o', 't', 'a', 'l', '_', 'i', 's', 's', 'u', 'e', 'd', '_', 'r', 'e', 'q', 'u', 'e', 
's', 't', 's', '\030', '\007', ' ', '\001', '(', '\004', 'R', '\023', 't', 'o', 't', 'a', 'l', 'I', 's', 's', 'u', 'e', 'd', 'R', 'e', 'q', 
'u', 'e', 's', 't', 's', '\022', ']', '\n', '\021', 'l', 'o', 'a', 'd', '_', 'm', 'e', 't', 'r', 'i', 'c', '_', 's', 't', 'a', 't', 
's', '\030', '\005', ' ', '\003', '(', '\013', '2', '1', '.', 'e', 'n', 'v', 'o', 'y', '.', 'c', 'o', 'n', 'f', 'i', 'g', '.', 'e', 'n', 
'd', 'p', 'o', 'i', 'n', 't', '.', 'v', '3', '.', 'E', 'n', 'd', 'p', 'o', 'i', 'n', 't', 'L', 'o', 'a', 'd', 'M', 'e', 't', 
'r', 'i', 'c', 'S', 't', 'a', 't', 's', 'R', '\017', 'l', 'o', 'a', 'd', 'M', 'e', 't', 'r', 'i', 'c', 'S', 't', 'a', 't', 's', 
':', '2', '\232', '\305', '\210', '\036', '-', '\n', '+', 'e', 'n', 'v', 'o', 'y', '.', 'a', 'p', 'i', '.', 'v', '2', '.', 'e', 'n', 'd', 
'p', 'o', 'i', 'n', 't', '.', 'U', 'p', 's', 't', 'r', 'e', 'a', 'm', 'E', 'n', 'd', 'p', 'o', 'i', 'n', 't', 'S', 't', 'a', 
't', 's', '\"', '\350', '\001', '\n', '\027', 'E', 'n', 'd', 'p', 'o', 'i', 'n', 't', 'L', 'o', 'a', 'd', 'M', 'e', 't', 'r', 'i', 'c', 
'S', 't', 'a', 't', 's', '\022', '\037', '\n', '\013', 'm', 'e', 't', 'r', 'i', 'c', '_', 'n', 'a', 'm', 'e', '\030', '\001', ' ', '\001', '(', 
'\t', 'R', '\n', 'm', 'e', 't', 'r', 'i', 'c', 'N', 'a', 'm', 'e', '\022', 'H', '\n', '!', 'n', 'u', 'm', '_', 'r', 'e', 'q', 'u', 
'e', 's', 't', 's', '_', 'f', 'i', 'n', 'i', 's', 'h', 'e', 'd', '_', 'w', 'i', 't', 'h', '_', 'm', 'e', 't', 'r', 'i', 'c', 
'\030', '\002', ' ', '\001', '(', '\004', 'R', '\035', 'n', 'u', 'm', 'R', 'e', 'q', 'u', 'e', 's', 't', 's', 'F', 'i', 'n', 'i', 's', 'h', 
'e', 'd', 'W', 'i', 't', 'h', 'M', 'e', 't', 'r', 'i', 'c', '\022', ',', '\n', '\022', 't', 'o', 't', 'a', 'l', '_', 'm', 'e', 't', 
'r', 'i', 'c', '_', 'v', 'a', 'l', 'u', 'e', '\030', '\003', ' ', '\001', '(', '\001', 'R', '\020', 't', 'o', 't', 'a', 'l', 'M', 'e', 't', 
'r', 'i', 'c', 'V', 'a', 'l', 'u', 'e', ':', '4', '\232', '\305', '\210', '\036', '/', '\n', '-', 'e', 'n', 'v', 'o', 'y', '.', 'a', 'p', 
'i', '.', 'v', '2', '.', 'e', 'n', 'd', 'p', 'o', 'i', 'n', 't', '.', 'E', 'n', 'd', 'p', 'o', 'i', 'n', 't', 'L', 'o', 'a', 
'd', 'M', 'e', 't', 'r', 'i', 'c', 'S', 't', 'a', 't', 's', '\"', '\230', '\001', '\n', '\036', 'U', 'n', 'n', 'a', 'm', 'e', 'd', 'E', 
'n', 'd', 'p', 'o', 'i', 'n', 't', 'L', 'o', 'a', 'd', 'M', 'e', 't', 'r', 'i', 'c', 'S', 't', 'a', 't', 's', '\022', 'H', '\n', 
'!', 'n', 'u', 'm', '_', 'r', 'e', 'q', 'u', 'e', 's', 't', 's', '_', 'f', 'i', 'n', 'i', 's', 'h', 'e', 'd', '_', 'w', 'i', 
't', 'h', '_', 'm', 'e', 't', 'r', 'i', 'c', '\030', '\001', ' ', '\001', '(', '\004', 'R', '\035', 'n', 'u', 'm', 'R', 'e', 'q', 'u', 'e', 
's', 't', 's', 'F', 'i', 'n', 'i', 's', 'h', 'e', 'd', 'W', 'i', 't', 'h', 'M', 'e', 't', 'r', 'i', 'c', '\022', ',', '\n', '\022', 
't', 'o', 't', 'a', 'l', '_', 'm', 'e', 't', 'r', 'i', 'c', '_', 'v', 'a', 'l', 'u', 'e', '\030', '\002', ' ', '\001', '(', '\001', 'R', 
'\020', 't', 'o', 't', 'a', 'l', 'M', 'e', 't', 'r', 'i', 'c', 'V', 'a', 'l', 'u', 'e', '\"', '\211', '\005', '\n', '\014', 'C', 'l', 'u', 
's', 't', 'e', 'r', 'S', 't', 'a', 't', 's', '\022', '*', '\n', '\014', 'c', 'l', 'u', 's', 't', 'e', 'r', '_', 'n', 'a', 'm', 'e', 
'\030', '\001', ' ', '\001', '(', '\t', 'B', '\007', '\372', 'B', '\004', 'r', '\002', '\020', '\001', 'R', '\013', 'c', 'l', 'u', 's', 't', 'e', 'r', 'N', 
'a', 'm', 'e', '\022', '0', '\n', '\024', 'c', 'l', 'u', 's', 't', 'e', 'r', '_', 's', 'e', 'r', 'v', 'i', 'c', 'e', '_', 'n', 'a', 
'm', 'e', '\030', '\006', ' ', '\001', '(', '\t', 'R', '\022', 'c', 'l', 'u', 's', 't', 'e', 'r', 'S', 'e', 'r', 'v', 'i', 'c', 'e', 'N', 
'a', 'm', 'e', '\022', 'q', '\n', '\027', 'u', 'p', 's', 't', 'r', 'e', 'a', 'm', '_', 'l', 'o', 'c', 'a', 'l', 'i', 't', 'y', '_', 
's', 't', 'a', 't', 's', '\030', '\002', ' ', '\003', '(', '\013', '2', '/', '.', 'e', 'n', 'v', 'o', 'y', '.', 'c', 'o', 'n', 'f', 'i', 
'g', '.', 'e', 'n', 'd', 'p', 'o', 'i', 'n', 't', '.', 'v', '3', '.', 'U', 'p', 's', 't', 'r', 'e', 'a', 'm', 'L', 'o', 'c', 
'a', 'l', 'i', 't', 'y', 'S', 't', 'a', 't', 's', 'B', '\010', '\372', 'B', '\005', '\222', '\001', '\002', '\010', '\001', 'R', '\025', 'u', 'p', 's', 
't', 'r', 'e', 'a', 'm', 'L', 'o', 'c', 'a', 'l', 'i', 't', 'y', 'S', 't', 'a', 't', 's', '\022', '4', '\n', '\026', 't', 'o', 't', 
'a', 'l', '_', 'd', 'r', 'o', 'p', 'p', 'e', 'd', '_', 'r', 'e', 'q', 'u', 'e', 's', 't', 's', '\030', '\003', ' ', '\001', '(', '\004', 
'R', '\024', 't', 'o', 't', 'a', 'l', 'D', 'r', 'o', 'p', 'p', 'e', 'd', 'R', 'e', 'q', 'u', 'e', 's', 't', 's', '\022', 'a', '\n', 
'\020', 'd', 'r', 'o', 'p', 'p', 'e', 'd', '_', 'r', 'e', 'q', 'u', 'e', 's', 't', 's', '\030', '\005', ' ', '\003', '(', '\013', '2', '6', 
'.', 'e', 'n', 'v', 'o', 'y', '.', 'c', 'o', 'n', 'f', 'i', 'g', '.', 'e', 'n', 'd', 'p', 'o', 'i', 'n', 't', '.', 'v', '3', 
'.', 'C', 'l', 'u', 's', 't', 'e', 'r', 'S', 't', 'a', 't', 's', '.', 'D', 'r', 'o', 'p', 'p', 'e', 'd', 'R', 'e', 'q', 'u', 
'e', 's', 't', 's', 'R', '\017', 'd', 'r', 'o', 'p', 'p', 'e', 'd', 'R', 'e', 'q', 'u', 'e', 's', 't', 's', '\022', 'K', '\n', '\024', 
'l', 'o', 'a', 'd', '_', 'r', 'e', 'p', 'o', 'r', 't', '_', 'i', 'n', 't', 'e', 'r', 'v', 'a', 'l', '\030', '\004', ' ', '\001', '(', 
'\013', '2', '\031', '.', 'g', 'o', 'o', 'g', 'l', 'e', '.', 'p', 'r', 'o', 't', 'o', 'b', 'u', 'f', '.', 'D', 'u', 'r', 'a', 't', 
'i', 'o', 'n', 'R', '\022', 'l', 'o', 'a', 'd', 'R', 'e', 'p', 'o', 'r', 't', 'I', 'n', 't', 'e', 'r', 'v', 'a', 'l', '\032', '\226', 
'\001', '\n', '\017', 'D', 'r', 'o', 'p', 'p', 'e', 'd', 'R', 'e', 'q', 'u', 'e', 's', 't', 's', '\022', '#', '\n', '\010', 'c', 'a', 't', 
'e', 'g', 'o', 'r', 'y', '\030', '\001', ' ', '\001', '(', '\t', 'B', '\007', '\372', 'B', '\004', 'r', '\002', '\020', '\001', 'R', '\010', 'c', 'a', 't', 
'e', 'g', 'o', 'r', 'y', '\022', '#', '\n', '\r', 'd', 'r', 'o', 'p', 'p', 'e', 'd', '_', 'c', 'o', 'u', 'n', 't', '\030', '\002', ' ', 
'\001', '(', '\004', 'R', '\014', 'd', 'r', 'o', 'p', 'p', 'e', 'd', 'C', 'o', 'u', 'n', 't', ':', '9', '\232', '\305', '\210', '\036', '4', '\n', 
'2', 'e', 'n', 'v', 'o', 'y', '.', 'a', 'p', 'i', '.', 'v', '2', '.', 'e', 'n', 'd', 'p', 'o', 'i', 'n', 't', '.', 'C', 'l', 
'u', 's', 't', 'e', 'r', 'S', 't', 'a', 't', 's', '.', 'D', 'r', 'o', 'p', 'p', 'e', 'd', 'R', 'e', 'q', 'u', 'e', 's', 't', 
's', ':', ')', '\232', '\305', '\210', '\036', '$', '\n', '\"', 'e', 'n', 'v', 'o', 'y', '.', 'a', 'p', 'i', '.', 'v', '2', '.', 'e', 'n', 
'd', 'p', 'o', 'i', 'n', 't', '.', 'C', 'l', 'u', 's', 't', 'e', 'r', 'S', 't', 'a', 't', 's', 'B', '\217', '\001', '\n', '&', 'i', 
'o', '.', 'e', 'n', 'v', 'o', 'y', 'p', 'r', 'o', 'x', 'y', '.', 'e', 'n', 'v', 'o', 'y', '.', 'c', 'o', 'n', 'f', 'i', 'g', 
'.', 'e', 'n', 'd', 'p', 'o', 'i', 'n', 't', '.', 'v', '3', 'B', '\017', 'L', 'o', 'a', 'd', 'R', 'e', 'p', 'o', 'r', 't', 'P', 
'r', 'o', 't', 'o', 'P', '\001', 'Z', 'J', 'g', 'i', 't', 'h', 'u', 'b', '.', 'c', 'o', 'm', '/', 'e', 'n', 'v', 'o', 'y', 'p', 
'r', 'o', 'x', 'y', '/', 'g', 'o', '-', 'c', 'o', 'n', 't', 'r', 'o', 'l', '-', 'p', 'l', 'a', 'n', 'e', '/', 'e', 'n', 'v', 
'o', 'y', '/', 'c', 'o', 'n', 'f', 'i', 'g', '/', 'e', 'n', 'd', 'p', 'o', 'i', 'n', 't', '/', 'v', '3', ';', 'e', 'n', 'd', 
'p', 'o', 'i', 'n', 't', 'v', '3', '\272', '\200', '\310', '\321', '\006', '\002', '\020', '\002', 'b', '\006', 'p', 'r', 'o', 't', 'o', '3', 
};

static _upb_DefPool_Init *deps[9] = {
  &envoy_config_core_v3_address_proto_upbdefinit,
  &envoy_config_core_v3_base_proto_upbdefinit,
  &google_protobuf_duration_proto_upbdefinit,
  &google_protobuf_struct_proto_upbdefinit,
  &xds_annotations_v3_status_proto_upbdefinit,
  &udpa_annotations_status_proto_upbdefinit,
  &udpa_annotations_versioning_proto_upbdefinit,
  &validate_validate_proto_upbdefinit,
  NULL
};

_upb_DefPool_Init envoy_config_endpoint_v3_load_report_proto_upbdefinit = {
  deps,
  &envoy_config_endpoint_v3_load_report_proto_upb_file_layout,
  "envoy/config/endpoint/v3/load_report.proto",
  UPB_STRINGVIEW_INIT(descriptor, 3123)
};