/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GameCenterPrivateUI.framework/GameCenterPrivateUI
 */

@class NSArray, NSLayoutConstraint, NSString, UIScrollView, UIView;

@interface GKBubbleDetailViewController : GKViewController <UIScrollViewDelegate> {
    NSArray *_bubbleViews;
    NSLayoutConstraint *_containerConstraint;
    UIView *_containerView;
    UIView *_rootLayoutView;
    id _scrollInsetsToken;
    UIScrollView *_scrollView;
}

@property(retain) NSArray * bubbleViews;
@property(retain) NSLayoutConstraint * containerConstraint;
@property(retain) UIView * containerView;
@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property(readonly) unsigned long long hash;
@property(retain) UIView * rootLayoutView;
@property(retain) id scrollInsetsToken;
@property(retain) UIScrollView * scrollView;
@property(readonly) Class superclass;

- (id)bubbleViews;
- (id)containerConstraint;
- (id)containerView;
- (void)dealloc;
- (double)heightConstant;
- (void)loadView;
- (id)rootLayoutView;
- (id)scrollInsetsToken;
- (id)scrollView;
- (void)setBubbleViews:(id)arg1;
- (void)setContainerConstraint:(id)arg1;
- (void)setContainerView:(id)arg1;
- (void)setRootLayoutView:(id)arg1;
- (void)setScrollInsetsToken:(id)arg1;
- (void)setScrollView:(id)arg1;
- (void)updateViewConstraints;
- (void)viewDidDisappear:(bool)arg1;
- (void)viewWillAppear:(bool)arg1;

@end