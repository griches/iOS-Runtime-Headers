/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@class NSString;

@interface SAWeatherLocationDeleteCompleted : SABaseCommand <SAServerBoundCommand> {
}

@property(copy) NSString * aceId;
@property(copy) NSString * refId;

+ (id)locationDeleteCompletedWithDictionary:(id)arg1 context:(id)arg2;
+ (id)locationDeleteCompleted;

- (id)groupIdentifier;
- (id)encodedClassName;

@end
