/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
 */

@class NSString, CoreDAVProp;

@interface CoreDAVPropStat : CoreDAVItem {
    CoreDAVProp *_prop;
    NSString *_status;
}

@property(retain) CoreDAVProp *prop;
@property(retain) NSString *status;

+ (BOOL)acceptsTopLevelLeaves;
+ (BOOL)ignoresUnknownChildren;
+ (BOOL)parsingWithSubItems;

- (id)copyCoreDAVParseRules;
- (void)dealloc;
- (id)description;
- (id)prop;
- (void)setProp:(id)arg1;
- (void)setStatus:(id)arg1;
- (id)status;

@end