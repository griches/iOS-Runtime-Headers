/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@class GEOMapRegion, GEOPlaceSearchRequest, NSString, GEOLocation;

@interface GEOMapQuery : PBCodable  {
    struct { 
        unsigned long long _high; 
        unsigned long long _low; 
    } _sessionID;
    int _clientImgFmt;
    int _clientImgMaxHeight;
    int _clientImgMaxWidth;
    int _mapCenterX;
    int _mapCenterY;
    GEOMapRegion *_mapRegion;
    int _mapSpanX;
    int _mapSpanY;
    GEOPlaceSearchRequest *_placeSearchRequest;
    NSString *_query;
    int _requestType;
    int _tilesizeX;
    int _tilesizeY;
    GEOLocation *_userLocation;
    int _zoomlevel;
    struct { 
        unsigned int sessionID : 1; 
        unsigned int clientImgFmt : 1; 
        unsigned int clientImgMaxHeight : 1; 
        unsigned int clientImgMaxWidth : 1; 
        unsigned int mapCenterX : 1; 
        unsigned int mapCenterY : 1; 
        unsigned int mapSpanX : 1; 
        unsigned int mapSpanY : 1; 
        unsigned int requestType : 1; 
        unsigned int tilesizeX : 1; 
        unsigned int tilesizeY : 1; 
        unsigned int zoomlevel : 1; 
    } _has;
}

@property(readonly) BOOL hasQuery;
@property(retain) NSString * query;
@property BOOL hasRequestType;
@property int requestType;
@property BOOL hasMapCenterX;
@property int mapCenterX;
@property BOOL hasMapCenterY;
@property int mapCenterY;
@property BOOL hasMapSpanX;
@property int mapSpanX;
@property BOOL hasMapSpanY;
@property int mapSpanY;
@property BOOL hasZoomlevel;
@property int zoomlevel;
@property BOOL hasClientImgFmt;
@property int clientImgFmt;
@property BOOL hasTilesizeX;
@property int tilesizeX;
@property BOOL hasTilesizeY;
@property int tilesizeY;
@property BOOL hasClientImgMaxWidth;
@property int clientImgMaxWidth;
@property BOOL hasClientImgMaxHeight;
@property int clientImgMaxHeight;
@property(readonly) BOOL hasMapRegion;
@property(retain) GEOMapRegion * mapRegion;
@property(readonly) BOOL hasUserLocation;
@property(retain) GEOLocation * userLocation;
@property BOOL hasSessionID;
@property struct { unsigned long long x1; unsigned long long x2; } sessionID;
@property(readonly) BOOL hasPlaceSearchRequest;
@property(retain) GEOPlaceSearchRequest * placeSearchRequest;


- (void)setQuery:(id)arg1;
- (id)description;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (void)dealloc;
- (int)requestType;
- (id)dictionaryRepresentation;
- (id)query;
- (void)setSessionID:(struct { unsigned long long x1; unsigned long long x2; })arg1;
- (struct { unsigned long long x1; unsigned long long x2; })sessionID;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (void)setMapRegion:(id)arg1;
- (id)mapRegion;
- (void)setHasSessionID:(BOOL)arg1;
- (void)setHasClientImgMaxHeight:(BOOL)arg1;
- (void)setHasClientImgMaxWidth:(BOOL)arg1;
- (void)setHasTilesizeY:(BOOL)arg1;
- (void)setHasTilesizeX:(BOOL)arg1;
- (void)setHasClientImgFmt:(BOOL)arg1;
- (void)setHasZoomlevel:(BOOL)arg1;
- (void)setHasMapSpanY:(BOOL)arg1;
- (void)setHasMapSpanX:(BOOL)arg1;
- (void)setHasMapCenterY:(BOOL)arg1;
- (void)setHasMapCenterX:(BOOL)arg1;
- (void)setHasRequestType:(BOOL)arg1;
- (id)placeSearchRequest;
- (BOOL)hasPlaceSearchRequest;
- (BOOL)hasSessionID;
- (id)userLocation;
- (BOOL)hasUserLocation;
- (BOOL)hasMapRegion;
- (void)setClientImgMaxHeight:(int)arg1;
- (int)clientImgMaxHeight;
- (BOOL)hasClientImgMaxHeight;
- (void)setClientImgMaxWidth:(int)arg1;
- (int)clientImgMaxWidth;
- (BOOL)hasClientImgMaxWidth;
- (void)setTilesizeY:(int)arg1;
- (int)tilesizeY;
- (BOOL)hasTilesizeY;
- (void)setTilesizeX:(int)arg1;
- (int)tilesizeX;
- (BOOL)hasTilesizeX;
- (void)setClientImgFmt:(int)arg1;
- (int)clientImgFmt;
- (BOOL)hasClientImgFmt;
- (void)setZoomlevel:(int)arg1;
- (int)zoomlevel;
- (BOOL)hasZoomlevel;
- (void)setMapSpanY:(int)arg1;
- (int)mapSpanY;
- (BOOL)hasMapSpanY;
- (void)setMapSpanX:(int)arg1;
- (int)mapSpanX;
- (BOOL)hasMapSpanX;
- (void)setMapCenterY:(int)arg1;
- (int)mapCenterY;
- (BOOL)hasMapCenterY;
- (void)setMapCenterX:(int)arg1;
- (int)mapCenterX;
- (BOOL)hasMapCenterX;
- (void)setRequestType:(int)arg1;
- (BOOL)hasRequestType;
- (BOOL)hasQuery;
- (void)setPlaceSearchRequest:(id)arg1;
- (void)setUserLocation:(id)arg1;
- (BOOL)readFrom:(id)arg1;

@end
