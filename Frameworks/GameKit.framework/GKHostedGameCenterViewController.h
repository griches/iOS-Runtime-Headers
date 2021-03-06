/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/GameKit.framework/GameKit
 */

@class GKRemoteGameCenterViewController, GKGameCenterViewController;

@interface GKHostedGameCenterViewController : GKHostedViewController  {
}

@property(readonly) GKGameCenterViewController * _parentController;
@property(readonly) GKRemoteGameCenterViewController * _remoteController;


- (id)_parentController;
- (id)_remoteController;
- (void)presentRemoteViewControllerIfNeeded;
- (id)_presentingViewController;
- (id)hostSideViewControllerClassName;
- (id)serviceSideViewControllerClassName;
- (void)didGetRemoteViewController;

@end
