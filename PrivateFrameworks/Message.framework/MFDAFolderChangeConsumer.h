/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/Message.framework/Message
 */

@class MFDAFolderChangeResult, MFConditionLock;

@interface MFDAFolderChangeConsumer : NSObject <DAFolderChangeConsumer> {
    MFConditionLock *_conditionLock;
    MFDAFolderChangeResult *_result;
}


- (void)dealloc;
- (id)init;
- (void)folderChange:(id)arg1 finishedWithStatus:(int)arg2 error:(id)arg3;
- (id)waitForResult;

@end
