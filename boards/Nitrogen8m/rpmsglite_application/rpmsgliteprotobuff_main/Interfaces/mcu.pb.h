/* Automatically generated nanopb header */
/* Generated by nanopb-0.3.9.2 at Thu Jan 10 10:36:01 2019. */

#ifndef PB_MCU_PB_H_INCLUDED
#define PB_MCU_PB_H_INCLUDED
#include "..\NymbleLibrary\NanoPb\pb.h"

/* @@protoc_insertion_point(includes) */
#if PB_PROTO_HEADER_VERSION != 30
#error Regenerate this file with the current version of nanopb generator.
#endif

#ifdef __cplusplus
extern "C" {
#endif

/* Enum definitions */
typedef enum _MpuMcuQuery {
    MpuMcuQuery_COMMIT_ID = 0
} MpuMcuQuery;
#define _MpuMcuQuery_MIN MpuMcuQuery_COMMIT_ID
#define _MpuMcuQuery_MAX MpuMcuQuery_COMMIT_ID
#define _MpuMcuQuery_ARRAYSIZE ((MpuMcuQuery)(MpuMcuQuery_COMMIT_ID+1))

/* Struct definitions */
typedef struct _McuCommitId {
    char commit[8];
/* @@protoc_insertion_point(struct:McuCommitId) */
} McuCommitId;

typedef struct _MpuMcuQueryCommand {
    MpuMcuQuery query;
/* @@protoc_insertion_point(struct:MpuMcuQueryCommand) */
} MpuMcuQueryCommand;

typedef struct _McuMpuMessage {
    pb_size_t which_val;
    union {
        McuCommitId commit_info;
    } val;
/* @@protoc_insertion_point(struct:McuMpuMessage) */
} McuMpuMessage;

typedef struct _MpuMcuMessage {
    pb_size_t which_val;
    union {
        MpuMcuQueryCommand query;
    } val;
/* @@protoc_insertion_point(struct:MpuMcuMessage) */
} MpuMcuMessage;

/* Default values for struct fields */
extern const MpuMcuQuery MpuMcuQueryCommand_query_default;

/* Initializer values for message structs */
#define McuCommitId_init_default                 {""}
#define McuMpuMessage_init_default               {0, {McuCommitId_init_default}}
#define MpuMcuQueryCommand_init_default          {MpuMcuQuery_COMMIT_ID}
#define MpuMcuMessage_init_default               {0, {MpuMcuQueryCommand_init_default}}
#define McuCommitId_init_zero                    {""}
#define McuMpuMessage_init_zero                  {0, {McuCommitId_init_zero}}
#define MpuMcuQueryCommand_init_zero             {_MpuMcuQuery_MIN}
#define MpuMcuMessage_init_zero                  {0, {MpuMcuQueryCommand_init_zero}}

/* Field tags (for use in manual encoding/decoding) */
#define McuCommitId_commit_tag                   1
#define MpuMcuQueryCommand_query_tag             1
#define McuMpuMessage_commit_info_tag            1
#define MpuMcuMessage_query_tag                  1

/* Struct field encoding specification for nanopb */
extern const pb_field_t McuCommitId_fields[2];
extern const pb_field_t McuMpuMessage_fields[2];
extern const pb_field_t MpuMcuQueryCommand_fields[2];
extern const pb_field_t MpuMcuMessage_fields[2];

/* Maximum encoded size of messages (where known) */
#define McuCommitId_size                         10
#define McuMpuMessage_size                       12
#define MpuMcuQueryCommand_size                  2
#define MpuMcuMessage_size                       4

/* Message IDs (where set with "msgid" option) */
#ifdef PB_MSGID

#define MCU_MESSAGES \


#endif

#ifdef __cplusplus
} /* extern "C" */
#endif
/* @@protoc_insertion_point(eof) */

#endif
