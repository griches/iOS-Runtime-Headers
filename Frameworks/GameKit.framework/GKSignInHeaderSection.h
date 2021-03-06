/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/GameKit.framework/GameKit
 */

@class GKSignInHeaderView;

@interface GKSignInHeaderSection : GKTableSection  {
    GKSignInHeaderView *_headerView;
}

@property(readonly) GKSignInHeaderView * headerView;


- (void)updateHeaderHeightForTableView:(id)arg1;
- (BOOL)tableView:(id)arg1 shouldSelectItem:(id)arg2;
- (id)sectionReuseIdentifierInTableView:(id)arg1;
- (id)tableView:(id)arg1 prepareContents:(id)arg2 forCell:(id)arg3 atIndexPath:(id)arg4;
- (id)tableView:(id)arg1 reuseIdentifierForRow:(int)arg2;
- (int)rowCountInTableView:(id)arg1;
- (void)dealloc;
- (id)headerView;
- (float)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;

@end
