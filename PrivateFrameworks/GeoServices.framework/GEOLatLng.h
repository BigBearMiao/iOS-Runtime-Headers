/* Generated by RuntimeBrowser on iPhone OS 4.0
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */



@interface GEOLatLng : PBCodable 
{
    NSInteger _latE7;
    NSInteger _lngE7;
}

@property NSInteger lngE7;
@property NSInteger latE7;


- (void)setLatE7:(NSInteger)arg1;
- (void)setLngE7:(NSInteger)arg1;
- (void)writeTo:(id)arg1;
- (id)dictionaryRepresentation;
- (id)init;
- (void)dealloc;
- (id)description;
- (BOOL)readFrom:(id)arg1;
- (NSInteger)lngE7;
- (NSInteger)latE7;

@end