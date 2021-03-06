/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/FTServices.framework/FTServices
 */

@class NSData, NSString;

@interface FTiMessageTextMessage : FTiMessagePeerMessage <NSCopying> {
    NSData *_messageData;
    NSString *_encryptionType;
}

@property(copy) NSData * messageData;
@property(copy) NSString * encryptionType;


- (void)setMessageData:(id)arg1;
- (BOOL)payloadCanBeLogged;
- (id)requiredKeys;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)init;
- (void)setEncryptionType:(id)arg1;
- (id)encryptionType;
- (int)command;
- (id)messageData;
- (id)messageBody;

@end
