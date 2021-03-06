/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@class NSString;

@interface SAUIAssistantUtteranceView : SAAceView <SADeferredKeyObject> {
}

@property(copy) NSString * dialogIdentifier;
@property(copy) NSString * text;

+ (id)assistantUtteranceViewWithDictionary:(id)arg1 context:(id)arg2;
+ (id)assistantUtteranceView;

- (id)groupIdentifier;
- (id)text;
- (void)setText:(id)arg1;
- (void)setDialogIdentifier:(id)arg1;
- (id)dialogIdentifier;
- (id)deferredKeys;
- (id)encodedClassName;

@end
