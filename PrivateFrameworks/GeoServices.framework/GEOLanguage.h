/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@class NSMutableArray;

@interface GEOLanguage : PBCodable  {
    unsigned int _identifier;
    NSMutableArray *_languages;
}

@property unsigned int identifier;
@property(retain) NSMutableArray * languages;


- (unsigned int)identifier;
- (id)description;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (void)dealloc;
- (void)setIdentifier:(unsigned int)arg1;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (id)languages;
- (id)languageAtIndex:(unsigned int)arg1;
- (void)clearLanguages;
- (unsigned int)languagesCount;
- (void)addLanguage:(id)arg1;
- (void)setLanguages:(id)arg1;
- (BOOL)readFrom:(id)arg1;

@end
