/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/YouTube.framework/YouTube
 */

@class YTSearchRequest, NSMutableArray, NSError;

@interface YTVideoDataSource : NSObject  {
    BOOL _hasLoaded;
    NSMutableArray *_videos;
    YTSearchRequest *_searchRequest;
    unsigned int _startIndex;
    unsigned int _videosRemaining;
    NSError *_lastError;
}

+ (id)sharedDataSource;
+ (void)saveDataSources;
+ (void)setShouldRemoveOldDefaults;
+ (BOOL)shouldRemoveOldDefaults;

- (void)loadFromDefaults;
- (void)dealloc;
- (id)init;
- (BOOL)isLoading;
- (void)reloadData;
- (void)removeAllVideos;
- (void)removeVideoAtIndex:(int)arg1;
- (unsigned int)maxVideosToSave;
- (unsigned int)videosRemaining;
- (id)lastError;
- (void)_clearVideos;
- (void)addVideos:(id)arg1 toTop:(BOOL)arg2;
- (void)_setVideos:(id)arg1;
- (id)_deprecatedVideosDefaultsKey;
- (void)_setLastError:(id)arg1;
- (void)_searchRequestLoadingStatusDidChange;
- (void)_saveToDefaults;
- (id)videos;
- (void)searchRequest:(id)arg1 didFailWithError:(id)arg2;
- (void)searchRequest:(id)arg1 receivedVideos:(id)arg2 startIndex:(unsigned int)arg3 videosRemaining:(unsigned int)arg4;
- (void)loadMore;
- (BOOL)hasLoaded;
- (void)_didChange;

@end
