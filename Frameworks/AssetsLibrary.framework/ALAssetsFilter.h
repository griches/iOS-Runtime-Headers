/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/AssetsLibrary.framework/AssetsLibrary
 */

@class ALAssetsFilterInternal;

@interface ALAssetsFilter : NSObject  {
    id _internal;
}

@property(retain) ALAssetsFilterInternal * internal;

+ (id)allAssets;
+ (id)allVideos;
+ (id)allPhotos;

- (void)setInternal:(id)arg1;
- (id)internal;
- (void)dealloc;
- (id)init;
- (void)_setFilter:(int)arg1;
- (int)_filter;

@end
