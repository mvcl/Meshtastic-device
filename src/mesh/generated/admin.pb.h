/* Automatically generated nanopb header */
/* Generated by nanopb-0.4.5 */

#ifndef PB_ADMIN_PB_H_INCLUDED
#define PB_ADMIN_PB_H_INCLUDED
#include <pb.h>
#include "channel.pb.h"
#include "mesh.pb.h"
#include "radioconfig.pb.h"

#if PB_PROTO_HEADER_VERSION != 40
#error Regenerate this file with the current version of nanopb generator.
#endif

/* Struct definitions */
/* This message is handled by the Admin module and is responsible for all settings/channel read/write operations.
 This message is used to do settings operations to both remote AND local nodes.
 (Prior to 1.2 these operations were done via special ToRadio operations) */
typedef struct _AdminMessage { 
    /* Set the radio provisioning for this node */
    pb_size_t which_variant;
    union {
        RadioConfig set_radio;
        User set_owner;
        Channel set_channel;
        bool get_radio_request;
        RadioConfig get_radio_response;
        uint32_t get_channel_request;
        Channel get_channel_response;
        bool get_owner_request;
        User get_owner_response;
        bool confirm_set_channel;
        bool confirm_set_radio;
        bool exit_simulator;
        int32_t reboot_seconds;
        bool get_canned_message_module_part1_request;
        char get_canned_message_module_part1_response[201];
        bool get_canned_message_module_part2_request;
        char get_canned_message_module_part2_response[201];
        bool get_canned_message_module_part3_request;
        char get_canned_message_module_part3_response[201];
        bool get_canned_message_module_part4_request;
        char get_canned_message_module_part4_response[201];
        char set_canned_message_module_part1[201];
        char set_canned_message_module_part2[201];
        char set_canned_message_module_part3[201];
        char set_canned_message_module_part4[201];
        int32_t shutdown_seconds;
    }; 
} AdminMessage;


#ifdef __cplusplus
extern "C" {
#endif

/* Initializer values for message structs */
#define AdminMessage_init_default                {0, {RadioConfig_init_default}}
#define AdminMessage_init_zero                   {0, {RadioConfig_init_zero}}

/* Field tags (for use in manual encoding/decoding) */
#define AdminMessage_set_radio_tag               1
#define AdminMessage_set_owner_tag               2
#define AdminMessage_set_channel_tag             3
#define AdminMessage_get_radio_request_tag       4
#define AdminMessage_get_radio_response_tag      5
#define AdminMessage_get_channel_request_tag     6
#define AdminMessage_get_channel_response_tag    7
#define AdminMessage_get_owner_request_tag       8
#define AdminMessage_get_owner_response_tag      9
#define AdminMessage_confirm_set_channel_tag     32
#define AdminMessage_confirm_set_radio_tag       33
#define AdminMessage_exit_simulator_tag          34
#define AdminMessage_reboot_seconds_tag          35
#define AdminMessage_get_canned_message_module_part1_request_tag 36
#define AdminMessage_get_canned_message_module_part1_response_tag 37
#define AdminMessage_get_canned_message_module_part2_request_tag 38
#define AdminMessage_get_canned_message_module_part2_response_tag 39
#define AdminMessage_get_canned_message_module_part3_request_tag 40
#define AdminMessage_get_canned_message_module_part3_response_tag 41
#define AdminMessage_get_canned_message_module_part4_request_tag 42
#define AdminMessage_get_canned_message_module_part4_response_tag 43
#define AdminMessage_set_canned_message_module_part1_tag 44
#define AdminMessage_set_canned_message_module_part2_tag 45
#define AdminMessage_set_canned_message_module_part3_tag 46
#define AdminMessage_set_canned_message_module_part4_tag 47
#define AdminMessage_shutdown_seconds_tag        51

/* Struct field encoding specification for nanopb */
#define AdminMessage_FIELDLIST(X, a) \
X(a, STATIC,   ONEOF,    MESSAGE,  (variant,set_radio,set_radio),   1) \
X(a, STATIC,   ONEOF,    MESSAGE,  (variant,set_owner,set_owner),   2) \
X(a, STATIC,   ONEOF,    MESSAGE,  (variant,set_channel,set_channel),   3) \
X(a, STATIC,   ONEOF,    BOOL,     (variant,get_radio_request,get_radio_request),   4) \
X(a, STATIC,   ONEOF,    MESSAGE,  (variant,get_radio_response,get_radio_response),   5) \
X(a, STATIC,   ONEOF,    UINT32,   (variant,get_channel_request,get_channel_request),   6) \
X(a, STATIC,   ONEOF,    MESSAGE,  (variant,get_channel_response,get_channel_response),   7) \
X(a, STATIC,   ONEOF,    BOOL,     (variant,get_owner_request,get_owner_request),   8) \
X(a, STATIC,   ONEOF,    MESSAGE,  (variant,get_owner_response,get_owner_response),   9) \
X(a, STATIC,   ONEOF,    BOOL,     (variant,confirm_set_channel,confirm_set_channel),  32) \
X(a, STATIC,   ONEOF,    BOOL,     (variant,confirm_set_radio,confirm_set_radio),  33) \
X(a, STATIC,   ONEOF,    BOOL,     (variant,exit_simulator,exit_simulator),  34) \
X(a, STATIC,   ONEOF,    INT32,    (variant,reboot_seconds,reboot_seconds),  35) \
X(a, STATIC,   ONEOF,    BOOL,     (variant,get_canned_message_module_part1_request,get_canned_message_module_part1_request),  36) \
X(a, STATIC,   ONEOF,    STRING,   (variant,get_canned_message_module_part1_response,get_canned_message_module_part1_response),  37) \
X(a, STATIC,   ONEOF,    BOOL,     (variant,get_canned_message_module_part2_request,get_canned_message_module_part2_request),  38) \
X(a, STATIC,   ONEOF,    STRING,   (variant,get_canned_message_module_part2_response,get_canned_message_module_part2_response),  39) \
X(a, STATIC,   ONEOF,    BOOL,     (variant,get_canned_message_module_part3_request,get_canned_message_module_part3_request),  40) \
X(a, STATIC,   ONEOF,    STRING,   (variant,get_canned_message_module_part3_response,get_canned_message_module_part3_response),  41) \
X(a, STATIC,   ONEOF,    BOOL,     (variant,get_canned_message_module_part4_request,get_canned_message_module_part4_request),  42) \
X(a, STATIC,   ONEOF,    STRING,   (variant,get_canned_message_module_part4_response,get_canned_message_module_part4_response),  43) \
X(a, STATIC,   ONEOF,    STRING,   (variant,set_canned_message_module_part1,set_canned_message_module_part1),  44) \
X(a, STATIC,   ONEOF,    STRING,   (variant,set_canned_message_module_part2,set_canned_message_module_part2),  45) \
X(a, STATIC,   ONEOF,    STRING,   (variant,set_canned_message_module_part3,set_canned_message_module_part3),  46) \
X(a, STATIC,   ONEOF,    STRING,   (variant,set_canned_message_module_part4,set_canned_message_module_part4),  47) \
X(a, STATIC,   ONEOF,    INT32,    (variant,shutdown_seconds,shutdown_seconds),  51)
#define AdminMessage_CALLBACK NULL
#define AdminMessage_DEFAULT NULL
#define AdminMessage_variant_set_radio_MSGTYPE RadioConfig
#define AdminMessage_variant_set_owner_MSGTYPE User
#define AdminMessage_variant_set_channel_MSGTYPE Channel
#define AdminMessage_variant_get_radio_response_MSGTYPE RadioConfig
#define AdminMessage_variant_get_channel_response_MSGTYPE Channel
#define AdminMessage_variant_get_owner_response_MSGTYPE User

extern const pb_msgdesc_t AdminMessage_msg;

/* Defines for backwards compatibility with code written before nanopb-0.4.0 */
#define AdminMessage_fields &AdminMessage_msg

/* Maximum encoded size of messages (where known) */
#define AdminMessage_size                        610

#ifdef __cplusplus
} /* extern "C" */
#endif

#endif
