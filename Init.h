#import <YouTubeHeader/YTSettingsSectionItemManager.h>


#define AccessibilityLabelKey @"accessibilityLabel"
#define ToggleKey @"toggle"
#define AsTextKey @"asText"
#define SelectorKey @"selector"
#define UpdateImageOnVisibleKey @"updateImageOnVisible"
#define ExtraBooleanKeys @"extraBooleanKeys"

@interface YTSettingsSectionItemManager (YTVideoOverlayInit)
+ (void)registerTweak:(NSString *)tweakId metadata:(NSDictionary *)metadata;
@end

#ifndef PS_ROOT_PATH
#define PS_ROOT_PATH(path) (access("/var/jb", F_OK) == 0 ? "/var/jb" path : path)
#endif

#ifndef PS_ROOT_PATH_NS
#define PS_ROOT_PATH_NS(path) ((access("/var/jb", F_OK) == 0) ? [@"/var/jb" stringByAppendingString:path] : path)
#endif