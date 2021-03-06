/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */

@class ML3MusicLibrary, NSDictionary;

@interface ML3TrackImporter : NSObject  {
    NSDictionary *_nameOrders;
    ML3MusicLibrary *_library;
    BOOL _updateSmartPlaylists;
}

@property(retain) NSDictionary * nameOrders;
@property BOOL updateSmartPlaylists;


- (void).cxx_destruct;
- (void)setUpdateSmartPlaylists:(BOOL)arg1;
- (BOOL)updateSmartPlaylists;
- (void)setNameOrders:(id)arg1;
- (id)nameOrders;
- (BOOL)updateTrack:(id)arg1 withImportTrack:(id)arg2;
- (void)importTrack:(id)arg1 withCompletionBlock:(id)arg2;
- (id)initWithMusicLibrary:(id)arg1;
- (id)_addStoreLinkForImportTrackProperties:(id)arg1;
- (id)_addGenreForImportTrackProperties:(id)arg1;
- (id)_addComposerForImportTrackProperties:(id)arg1;
- (id)_addArtistForImportTrackProperties:(id)arg1;
- (id)_addAlbumForImportTrackProperties:(id)arg1;
- (id)_addAlbumArtistForImportTrackProperties:(id)arg1;
- (BOOL)_shouldInsertITMediaKindIntoPurchasedPlaylist:(unsigned long)arg1;
- (id)_newTrackPropertiesByProcessingImportTrack:(id)arg1 insertStringsIntoSortMap:(BOOL)arg2;

@end
