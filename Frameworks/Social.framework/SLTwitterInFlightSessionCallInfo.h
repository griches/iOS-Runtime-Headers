/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/Social.framework/Social
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class TWDSessionProxy;

@interface SLTwitterInFlightSessionCallInfo : NSObject  {

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _remoteCall;

    TWDSessionProxy *_sessionProxy;
}

@property(copy) id remoteCall;
@property TWDSessionProxy * sessionProxy;


- (void).cxx_destruct;
- (void)setSessionProxy:(id)arg1;
- (id)sessionProxy;
- (void)setRemoteCall:(id)arg1;
- (id)remoteCall;

@end
