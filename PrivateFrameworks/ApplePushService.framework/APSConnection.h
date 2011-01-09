/* Generated by RuntimeBrowser on iPhone OS 3.0
   Image: /System/Library/PrivateFrameworks/ApplePushService.framework/ApplePushService
 */

@class NSArray, NSString, NSLock, <APSConnectionDelegate>;



@interface APSConnection : NSObject 
{
    <APSConnectionDelegate> *_delegate;
    NSLock *_lock;
    NSString *_environmentName;
    struct __CFRunLoopSource { } *_runLoopSource;
    NSString *_connectionPortName;
    NSUInteger _connectionPort;
    NSUInteger _connectionServerPort;
    struct __CFMachPort { } *_connectionSeverCFMachPort;
    NSArray *_enabledTopics;
    NSArray *_ignoredTopics;
}

@property <APSConnectionDelegate> *delegate; /* unknown property attribute: V_delegate */


- (id)initWithEnvironmentName:(id)arg1;
- (id)initWithEnvironmentName:(id)arg1 namedDelegatePort:(id)arg2;
- (void)dealloc;
- (void)_connect;
- (void)_disconnect;
- (void)_connectionServerPortInvalidated;
- (void)scheduleInRunLoop:(id)arg1;
- (void)removeFromRunLoop;
- (id)_dataForPropertyList:(id)arg1;
- (void)setEnabledTopics:(id)arg1;
- (void)setIgnoredTopics:(id)arg1;
- (id)publicToken;
- (BOOL)hasIdentity;
- (void)_deliverMessageForTopic:(id)arg1 userInfo:(id)arg2;
- (void)_deliverPublicToken:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;

@end