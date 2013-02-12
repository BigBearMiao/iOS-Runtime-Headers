/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@class NSMutableArray, NSString;

@interface GEOLocalizedAttribution : PBCodable {
    NSString *_displayName;
    NSString *_language;
    NSMutableArray *_logoURLs;
    NSMutableArray *_snippetLogoURLs;
}

@property(retain) NSString * displayName;
@property(readonly) BOOL hasDisplayName;
@property(readonly) BOOL hasLanguage;
@property(retain) NSString * language;
@property(retain) NSMutableArray * logoURLs;
@property(retain) NSMutableArray * snippetLogoURLs;

- (void)addLogoURLs:(id)arg1;
- (void)addSnippetLogoURLs:(id)arg1;
- (id)bestURLForLogos:(id)arg1;
- (void)clearLogoURLs;
- (void)clearSnippetLogoURLs;
- (void)copyTo:(id)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (id)displayName;
- (BOOL)hasDisplayName;
- (BOOL)hasLanguage;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (id)language;
- (id)logoURLs;
- (id)logoURLsAtIndex:(unsigned int)arg1;
- (unsigned int)logoURLsCount;
- (BOOL)readFrom:(id)arg1;
- (void)setDisplayName:(id)arg1;
- (void)setLanguage:(id)arg1;
- (void)setLogoURLs:(id)arg1;
- (void)setSnippetLogoURLs:(id)arg1;
- (id)snippetLogoURLs;
- (id)snippetLogoURLsAtIndex:(unsigned int)arg1;
- (unsigned int)snippetLogoURLsCount;
- (void)writeTo:(id)arg1;

@end