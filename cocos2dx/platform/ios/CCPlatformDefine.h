#ifndef __CCPLATFORMDEFINE_H__
#define __CCPLATFORMDEFINE_H__

#define CC_DLL 

#define CC_ASSERT(cond, msg) \
if (! (cond)) \
{ \
    char content[1024]; \
    snprintf(content, 1024, "%s %s function:%s line:%d", msg, __FILE__, __FUNCTION__, __LINE__ - 4);  \
    CCLog("Assert %s %s", content, msg); \
    CCMessageBox(content, "Assert error"); \
}

#define CC_UNUSED_PARAM(unusedparam) (void)unusedparam

/* Define NULL pointer value */
#ifndef NULL
#ifdef __cplusplus
#define NULL    0
#else
#define NULL    ((void *)0)
#endif
#endif



#endif /* __CCPLATFORMDEFINE_H__*/
