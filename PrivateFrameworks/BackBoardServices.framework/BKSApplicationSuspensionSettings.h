/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/BackBoardServices.framework/BackBoardServices
 */

@class NSNumber, NSString;

@interface BKSApplicationSuspensionSettings : NSObject <NSCopying, BKSXPCCoding> {
    NSNumber *_statusBarStyle;
    NSNumber *_statusBarHidden;
    NSNumber *_classicAppZoomedIn;
    NSNumber *_taskSuspendingUnsupported;
    NSNumber *_defaultPNGExpirationTime;
    NSString *_defaultPNG;
}

@property(retain) NSNumber * statusBarStyle;
@property(retain) NSNumber * statusBarHidden;
@property(retain) NSNumber * classicAppZoomedIn;
@property(retain) NSNumber * taskSuspendingUnsupported;
@property(retain) NSNumber * defaultPNGExpirationTime;
@property(copy) NSString * defaultPNG;


- (id)statusBarHidden;
- (id)defaultPNGExpirationTime;
- (void)setDefaultPNG:(id)arg1;
- (void)setDefaultPNGExpirationTime:(id)arg1;
- (void)setTaskSuspendingUnsupported:(id)arg1;
- (void)setClassicAppZoomedIn:(id)arg1;
- (id)defaultPNG;
- (id)taskSuspendingUnsupported;
- (id)classicAppZoomedIn;
- (id)initWithSettings:(id)arg1 zone:(struct _NSZone { }*)arg2;
- (id)initWithXPCDictionary:(id)arg1;
- (void)encodeWithXPCDictionary:(id)arg1;
- (id)description;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (void)setStatusBarHidden:(id)arg1;
- (void)setStatusBarStyle:(id)arg1;
- (id)statusBarStyle;

@end
