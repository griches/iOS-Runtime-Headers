/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/FactoryDiags.framework/FactoryDiags
 */

/* RuntimeBrowser encountered one or more ivar type encodings for a function pointer. 
   The runtime does not encode function signature information.  We use a signature of: 
           "int (*funcName)()",  where funcName might be null. 
 */

@class NSMutableArray, NSArray;

@interface OSDHIDEventSystemClient : NSObject  {
    struct __IOHIDEventSystemClient { } *_hidClient;
    int (*_callback)();
    SEL _callbackSel;
    void *_cbTarget;
    void *_cbContext;
    NSMutableArray *_matchingServices;
    int _eventState;
    BOOL __unitTest_timedOut;
}

@property(readonly) NSArray * matchedServices;
@property(readonly) struct __IOHIDEventSystemClient { }* ioHIDClient;

+ (id)hidClient;

- (void)dealloc;
- (id)init;
- (void)__unitTestTimeout;
- (void)__unitTestCallback:(id)arg1;
- (id)startEventsWithCallback:(SEL)arg1 withTarget:(id)arg2;
- (BOOL)setReportInterval:(long)arg1 forAppleUsagePage:(unsigned long)arg2;
- (BOOL)service:(struct __IOHIDServiceClient { }*)arg1 matchesAppleUsage:(unsigned long)arg2;
- (id)matchedServices;
- (BOOL)setReportInterval:(long)arg1 forService:(struct __IOHIDServiceClient { }*)arg2;
- (BOOL)service:(struct __IOHIDServiceClient { }*)arg1 matchesPrimaryUsage:(unsigned long)arg2 andUsage:(unsigned long)arg3;
- (void)addAppleServiceForMatching:(unsigned long)arg1;
- (void)_resetMatchingServices;
- (BOOL)_setProperty:(struct __CFString { }*)arg1 forService:(struct __IOHIDServiceClient { }*)arg2 withValue:(void*)arg3;
- (void)_callbackBounceWithEvent:(id)arg1;
- (id)__unitTest;
- (struct __IOHIDServiceClient { }*)getServiceForPrimaryUsage:(unsigned long)arg1 andUsage:(unsigned long)arg2;
- (void)addUsagePage:(unsigned long)arg1 andServiceForMatching:(unsigned long)arg2;
- (void)removeAllMatchedServices;
- (BOOL)setProperty:(id)arg1 withValue:(id)arg2 forService:(struct __IOHIDServiceClient { }*)arg3;
- (id)getProperty:(id)arg1 forService:(struct __IOHIDServiceClient { }*)arg2;
- (struct __IOHIDServiceClient { }*)getAppleServiceForUsage:(unsigned long)arg1;
- (BOOL)setProperty:(id)arg1 withValue:(id)arg2;
- (id)getProperty:(id)arg1;
- (id)startEventsWithCallback:(int (*)())arg1 target:(void*)arg2 andContext:(void*)arg3;
- (void)addAllAppleServicesForMatching;
- (struct __IOHIDEventSystemClient { }*)ioHIDClient;
- (void)stopEvents;

@end
