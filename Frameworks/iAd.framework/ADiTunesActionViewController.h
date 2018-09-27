/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/iAd.framework/iAd
 */

@interface ADiTunesActionViewController : ADActionViewController <SKStoreProductViewControllerDelegate> {
    int  _defaultResult;
    SKStoreProductViewController * _storeProductViewController;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) int defaultResult;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) SKStoreProductViewController *storeProductViewController;
@property (readonly) Class superclass;

- (void)clientApplicationDidEnterBackground;
- (void)dealloc;
- (int)defaultResult;
- (void)didSetAdSpace;
- (void)dismiss;
- (void)productViewController:(id)arg1 didFinishWithResult:(long long)arg2;
- (void)setDefaultResult:(int)arg1;
- (void)setStoreProductViewController:(id)arg1;
- (id)storeProductViewController;
- (unsigned long long)supportedInterfaceOrientations;
- (void)viewWillAppear:(bool)arg1;

@end