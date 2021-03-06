/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/Message.framework/Message
 */

@class MFOfflineTransferFailureSnapshot, NSString;

@interface _MFTransferFailureReplayContextTransformation : NSObject <MFOfflineCacheReplayContextTransformation> {
    NSString *_temporaryID;
    MFOfflineTransferFailureSnapshot *_snapshot;
}


- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithTemporaryID:(id)arg1 transferFailureSnapshot:(id)arg2;
- (void)applyToReplayContext:(id)arg1;

@end
