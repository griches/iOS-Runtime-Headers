/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/MailServices.framework/MailServices
 */

@interface MSMessageAutosave : MSMailDefaultService  {
}

+ (BOOL)hasAutosavedMessageWithIdentifier:(id)arg1;
+ (id)autosavedMessageDataWithIdentifier:(id)arg1 error:(id*)arg2;
+ (void)autosaveMessageData:(id)arg1 withIdentifier:(id)arg2 handler:(id)arg3;
+ (void)removeAutosavedMessageWithIdentifier:(id)arg1;


@end
