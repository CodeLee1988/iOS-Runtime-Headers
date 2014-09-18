/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
 */

@class NSMutableDictionary;

@interface MCDependencyReader : NSObject {
    NSMutableDictionary *_domainsDict;
}

@property(retain) NSMutableDictionary * domainsDict;

+ (id)sharedReader;

- (void).cxx_destruct;
- (id)_domainsDictionaryForDomain:(id)arg1 parent:(id)arg2 outParentsDict:(id*)arg3 outDependents:(id*)arg4;
- (id)_init;
- (id)dependentsOfParent:(id)arg1 inDomain:(id)arg2;
- (id)domainsDict;
- (id)init;
- (void)invalidateCache;
- (id)parentsInDomain:(id)arg1;
- (void)setDomainsDict:(id)arg1;

@end