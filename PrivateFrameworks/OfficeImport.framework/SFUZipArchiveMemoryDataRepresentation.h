/* Generated by RuntimeBrowser on iPhone OS 4.0
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@class NSData;



@interface SFUZipArchiveMemoryDataRepresentation : SFUDataRepresentation <SFUZipArchiveDataRepresentation>
{
    NSData *mData;
}


- (id)data;
- (id)initWithData:(id)arg1;
- (void)dealloc;
- (id)bufferedInputStreamWithBufferSize:(unsigned long)arg1;
- (id)inputStream;
- (BOOL)isReadable;
- (id)bufferedInputStreamWithOffset:(long long)arg1 length:(long long)arg2;
- (BOOL)hasSameLocationAs:(id)arg1;
- (id)inputStreamWithOffset:(long long)arg1 length:(long long)arg2;
- (id)bufferedInputStream;
- (long long)dataLength;

@end