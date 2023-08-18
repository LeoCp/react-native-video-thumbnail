#import <AVFoundation/AVFoundation.h>
#import <UIKit/UIKit.h>

#if __has_include(<React/RCTBridgeModule.h>)
#import <React/RCTBridgeModule.h>
#elif __has_include("RCTBridgeModule.h")
#import "RCTBridgeModule.h"
#else
#import "React/RCTBridgeModule.h"
#endif

@interface RNVideoThumbnail : NSObject <RCTBridgeModule>

@end
