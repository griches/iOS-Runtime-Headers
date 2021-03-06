/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/iPodUI.framework/iPodUI
 */

@interface IUVideoChaptersViewController : IUVideoPartListViewController  {
    unsigned int _selectedChapter;
}


- (id)title;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (void)startPlaybackFromIndexPath:(id)arg1;
- (id)mediaItemAtIndexPath:(id)arg1;
- (id)indexPathForRowOfContentPosition;
- (BOOL)shouldDisableWhileDownloading;
- (void)_playChapter;
- (id)indexPathForMediaItem:(id)arg1 atTime:(double)arg2;
- (Class)tableViewCellClass;

@end
