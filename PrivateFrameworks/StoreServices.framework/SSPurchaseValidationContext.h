/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class NSString, NSIndexSet;

@interface SSPurchaseValidationContext : NSObject <NSCopying> {
    NSIndexSet *_allowedDeviceIdentifiers;

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _sizeLimitBlock;

    NSString *_systemName;
    NSString *_systemVersion;
}

@property(copy) NSIndexSet * allowedDeviceIdentifiers;
@property(copy) id sizeLimitBlock;
@property(copy) NSString * systemName;
@property(copy) NSString * systemVersion;


- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (void)setSystemVersion:(id)arg1;
- (void)setSystemName:(id)arg1;
- (void)setSizeLimitBlock:(id)arg1;
- (void)setAllowedDeviceIdentifiers:(id)arg1;
- (id)allowedDeviceIdentifiers;
- (id)_supportedDeviceForOffer:(id)arg1;
- (id)sizeLimitBlock;
- (id)systemVersion;
- (id)systemName;

@end