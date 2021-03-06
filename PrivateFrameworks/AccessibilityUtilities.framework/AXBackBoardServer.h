/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/AccessibilityUtilities.framework/AccessibilityUtilities
 */

@class NSMutableArray;

@interface AXBackBoardServer : AXServer  {
    BOOL _overrideGestureRecognition;
    NSMutableArray *_eventListeners;
    NSMutableArray *_zoomListeners;
}

+ (id)server;

- (id)_serviceName;
- (void)removeEventListener:(struct NSString { Class x1; }*)arg1;
- (void)setVoiceOverItemChooserVisible:(BOOL)arg1;
- (void)wakeUpDeviceIfNecessary;
- (void)userEventOccurred;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })convertFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 forContextId:(unsigned int)arg2;
- (void)removeZoomLevelHandler:(id)arg1;
- (id)registerZoomLevelChangeHandler:(id)arg1;
- (void)zoomDeactivationAnimationWillBegin;
- (void)zoomActivationAnimationWillBegin;
- (void)zoomWillBeginAppSwitcherReveal;
- (float)zoomAppSwitcherRevealAnimationDelay;
- (double)zoomDeactivationAnimationStartDelay;
- (void)postGSEvent:(struct { int x1; int x2; struct CGPoint { float x_3_1_1; float x_3_1_2; } x3; struct CGPoint { float x_4_1_1; float x_4_1_2; } x4; unsigned int x5; unsigned long long x6; void *x7; int x8; int x9; unsigned int x10; unsigned char x11[0]; }*)arg1 systemEvent:(BOOL)arg2 postThroughHID:(BOOL)arg3;
- (double)zoomActivationAnimationStartDelay;
- (void)setLockScreenDimTimerEnabled:(BOOL)arg1;
- (void)zoomFocusChanged:(id)arg1;
- (void)registerGestureConflictWithZoom:(id)arg1;
- (void)registerEventListener:(id)arg1 withIdentifierCallback:(id)arg2;
- (void)registerAssistiveTouchPID:(int)arg1;
- (id)_handleZoomListener:(id)arg1;
- (id)_handleEventListener:(id)arg1;
- (void)_connectServerIfNecessary;
- (BOOL)_connectIfNecessary;
- (void)dealloc;
- (id)init;

@end
