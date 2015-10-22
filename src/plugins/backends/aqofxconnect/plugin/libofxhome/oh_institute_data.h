/**********************************************************
 * This file has been automatically created by "typemaker2"
 * from the file "oh_institute_data.xml".
 * Please do not edit this file, all changes will be lost.
 * Better edit the mentioned source file instead.
 **********************************************************/

#ifndef OH_INSTITUTE_DATA_H
#define OH_INSTITUTE_DATA_H


#ifdef __cplusplus
extern "C" {
#endif

/* define OH_INSTITUTE_DATA_FLAGS */
#define OH_INSTITUTE_DATA_FLAGS_OFXFAIL 0x00000001
#define OH_INSTITUTE_DATA_FLAGS_SSLFAIL 0x00000002


/* needed system headers */
#include <gwenhywfar/types.h>
#include <gwenhywfar/list1.h>
#include <gwenhywfar/list2.h>
#include <gwenhywfar/db.h>

/* pre-headers */
#include <aqofxconnect/aqofxconnect.h>
#include <gwenhywfar/gwentime.h>

typedef struct OH_INSTITUTE_DATA OH_INSTITUTE_DATA;
GWEN_LIST_FUNCTION_LIB_DEFS(OH_INSTITUTE_DATA, OH_InstituteData, AQOFXCONNECT_API)
GWEN_LIST2_FUNCTION_LIB_DEFS(OH_INSTITUTE_DATA, OH_InstituteData, AQOFXCONNECT_API)


/* post-headers */
#include <aqofxconnect/oh_institute_data_fns.h>


/** Constructor. */
AQOFXCONNECT_API OH_INSTITUTE_DATA *OH_InstituteData_new(void);

/** Destructor. */
AQOFXCONNECT_API void OH_InstituteData_free(OH_INSTITUTE_DATA *p_struct);

AQOFXCONNECT_API void OH_InstituteData_Attach(OH_INSTITUTE_DATA *p_struct);

AQOFXCONNECT_API OH_INSTITUTE_DATA *OH_InstituteData_dup(const OH_INSTITUTE_DATA *p_struct);

AQOFXCONNECT_API OH_INSTITUTE_DATA *OH_InstituteData_copy(OH_INSTITUTE_DATA *p_struct, const OH_INSTITUTE_DATA *p_src);

/** Getter.
 * Use this function to get the member "id"
*/
AQOFXCONNECT_API int OH_InstituteData_GetId(const OH_INSTITUTE_DATA *p_struct);

/** Getter.
 * Use this function to get the member "flags"
*/
AQOFXCONNECT_API uint32_t OH_InstituteData_GetFlags(const OH_INSTITUTE_DATA *p_struct);

/** Getter.
 * Use this function to get the member "name"
*/
AQOFXCONNECT_API const char *OH_InstituteData_GetName(const OH_INSTITUTE_DATA *p_struct);

/** Getter.
 * Use this function to get the member "fid"
*/
AQOFXCONNECT_API const char *OH_InstituteData_GetFid(const OH_INSTITUTE_DATA *p_struct);

/** Getter.
 * Use this function to get the member "org"
*/
AQOFXCONNECT_API const char *OH_InstituteData_GetOrg(const OH_INSTITUTE_DATA *p_struct);

/** Getter.
 * Use this function to get the member "brokerId"
*/
AQOFXCONNECT_API const char *OH_InstituteData_GetBrokerId(const OH_INSTITUTE_DATA *p_struct);

/** Getter.
 * Use this function to get the member "url"
*/
AQOFXCONNECT_API const char *OH_InstituteData_GetUrl(const OH_INSTITUTE_DATA *p_struct);

/** Getter.
 * Use this function to get the member "lastOfxValidationTime"
*/
AQOFXCONNECT_API const GWEN_TIME *OH_InstituteData_GetLastOfxValidationTime(const OH_INSTITUTE_DATA *p_struct);

/** Getter.
 * Use this function to get the member "lastSslValidationTime"
*/
AQOFXCONNECT_API const GWEN_TIME *OH_InstituteData_GetLastSslValidationTime(const OH_INSTITUTE_DATA *p_struct);

/** Getter.
 * Use this function to get the member "fileName"
*/
AQOFXCONNECT_API const char *OH_InstituteData_GetFileName(const OH_INSTITUTE_DATA *p_struct);

/** Setter.
 * Use this function to set the member "id"
*/
AQOFXCONNECT_API void OH_InstituteData_SetId(OH_INSTITUTE_DATA *p_struct, int p_src);

/** Setter.
 * Use this function to set the member "flags"
*/
AQOFXCONNECT_API void OH_InstituteData_SetFlags(OH_INSTITUTE_DATA *p_struct, uint32_t p_src);

/** Add flags.
 * Use this function to add flags to the member "flags"
*/
AQOFXCONNECT_API void OH_InstituteData_AddFlags(OH_INSTITUTE_DATA *p_struct, uint32_t p_src);

/** Sub flags.
 * Use this function to sub flags from the member "flags"
*/
AQOFXCONNECT_API void OH_InstituteData_SubFlags(OH_INSTITUTE_DATA *p_struct, uint32_t p_src);

/** Setter.
 * Use this function to set the member "name"
*/
AQOFXCONNECT_API void OH_InstituteData_SetName(OH_INSTITUTE_DATA *p_struct, const char *p_src);

/** Setter.
 * Use this function to set the member "fid"
*/
AQOFXCONNECT_API void OH_InstituteData_SetFid(OH_INSTITUTE_DATA *p_struct, const char *p_src);

/** Setter.
 * Use this function to set the member "org"
*/
AQOFXCONNECT_API void OH_InstituteData_SetOrg(OH_INSTITUTE_DATA *p_struct, const char *p_src);

/** Setter.
 * Use this function to set the member "brokerId"
*/
AQOFXCONNECT_API void OH_InstituteData_SetBrokerId(OH_INSTITUTE_DATA *p_struct, const char *p_src);

/** Setter.
 * Use this function to set the member "url"
*/
AQOFXCONNECT_API void OH_InstituteData_SetUrl(OH_INSTITUTE_DATA *p_struct, const char *p_src);

/** Setter.
 * Use this function to set the member "lastOfxValidationTime"
*/
AQOFXCONNECT_API void OH_InstituteData_SetLastOfxValidationTime(OH_INSTITUTE_DATA *p_struct, const GWEN_TIME *p_src);

/** Setter.
 * Use this function to set the member "lastSslValidationTime"
*/
AQOFXCONNECT_API void OH_InstituteData_SetLastSslValidationTime(OH_INSTITUTE_DATA *p_struct, const GWEN_TIME *p_src);

/** Setter.
 * Use this function to set the member "fileName"
*/
AQOFXCONNECT_API void OH_InstituteData_SetFileName(OH_INSTITUTE_DATA *p_struct, const char *p_src);

/* list1 functions */
AQOFXCONNECT_API OH_INSTITUTE_DATA_LIST *OH_InstituteData_List_dup(const OH_INSTITUTE_DATA_LIST *p_src);

AQOFXCONNECT_API void OH_InstituteData_ReadDb(OH_INSTITUTE_DATA *p_struct, GWEN_DB_NODE *p_db);

AQOFXCONNECT_API int OH_InstituteData_WriteDb(const OH_INSTITUTE_DATA *p_struct, GWEN_DB_NODE *p_db);

AQOFXCONNECT_API OH_INSTITUTE_DATA *OH_InstituteData_fromDb(GWEN_DB_NODE *p_db);

AQOFXCONNECT_API int OH_InstituteData_toDb(const OH_INSTITUTE_DATA *p_struct, GWEN_DB_NODE *p_db);

AQOFXCONNECT_API OH_INSTITUTE_DATA *OH_InstituteData_List_GetById(const OH_INSTITUTE_DATA_LIST *p_list, int p_cmp);

#ifdef __cplusplus
}
#endif

#endif
