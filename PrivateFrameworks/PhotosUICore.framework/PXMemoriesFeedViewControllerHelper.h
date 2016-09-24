/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXMemoriesFeedViewControllerHelper : PXObservable <PXMemoriesFeedScrollFilterDelegate, PXMemoriesFeedTilingLayoutDelegate, PXSectionedDataSourceManagerObserver, PXSectionedLayoutEngineDelegate, PXTilingControllerScrollDelegate, PXTilingControllerTransitionDelegate> {
    NSDate * __lastUserMemoryGenerationRequestDate;
    PXSectionedLayoutEngine * __layoutEngine;
    PXSectionedObjectReference * __memoryReferenceToScrollToVisible;
    id /* block */  __newMemoriesRequestCompletion;
    int  __refreshRetryCount;
    BOOL  __requestingNewMemories;
    PXMemoriesFeedScrollFilter * __scrollFilter;
    PXMemoriesSpec * __spec;
    PXMemoriesFeedTransitionAnimationCoordinator * __transitionAnimationCoordinator;
    PXSectionedObjectReference * _actionPresentationMemoryReference;
    PXSectionedObjectReference * _activatedMemoryReference;
    struct CGPoint { 
        double x; 
        double y; 
    }  _anchorMemoryOrigin;
    PXSectionedObjectReference * _anchorMemoryReference;
    PXMemoriesFeedDataSourceManager * _dataSourceManager;
    <PXMemoriesFeedViewControllerHelperDelegate> * _delegate;
    struct { 
        BOOL feedIsVisible; 
        BOOL reloadedTileKindsOnObjectChanged; 
        BOOL configureMetrics; 
    }  _delegateRespondsTo;
    BOOL  _hasAppeared;
    PXSectionedObjectReference * _highlightedMemoryReference;
    struct { 
        BOOL layoutEngine; 
    }  _needsToUpdate;
    PHPhotoLibrary * _photoLibrary;
    id  _refreshResetNotification;
    PXScrollViewController * _scrollViewController;
    PXSectionedSelectionManager * _selectionManager;
    PXMemoriesSpecManager * _specManager;
    PXTilingController * _tilingController;
    PXExtendedTraitCollection * _traitCollection;
}

@property (setter=_setLastUserMemoryGenerationRequestDate:, nonatomic, retain) NSDate *_lastUserMemoryGenerationRequestDate;
@property (nonatomic, readonly) PXSectionedLayoutEngine *_layoutEngine;
@property (setter=_setMemoryReferenceToScrollToVisible:, nonatomic, retain) PXSectionedObjectReference *_memoryReferenceToScrollToVisible;
@property (setter=_setNewMemoriesRequestCompletion:, nonatomic, copy) id /* block */ _newMemoriesRequestCompletion;
@property (setter=_setRefreshRetryCount:, nonatomic) int _refreshRetryCount;
@property (getter=_isRequestingNewMemories, setter=_setRequestingNewMemories:, nonatomic) BOOL _requestingNewMemories;
@property (nonatomic, readonly) PXMemoriesFeedScrollFilter *_scrollFilter;
@property (setter=_setSpec:, nonatomic, retain) PXMemoriesSpec *_spec;
@property (nonatomic, readonly) PXMemoriesFeedTransitionAnimationCoordinator *_transitionAnimationCoordinator;
@property (nonatomic, retain) PXSectionedObjectReference *actionPresentationMemoryReference;
@property (nonatomic, retain) PXSectionedObjectReference *activatedMemoryReference;
@property (setter=_setAnchorMemoryOrigin:, nonatomic) struct CGPoint { double x1; double x2; } anchorMemoryOrigin;
@property (setter=_setAnchorMemoryReference:, nonatomic, retain) PXSectionedObjectReference *anchorMemoryReference;
@property (nonatomic, readonly) PXMemoriesFeedTilingLayout *currentLayout;
@property (nonatomic, readonly) PXMemoriesFeedDataSourceManager *dataSourceManager;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <PXMemoriesFeedViewControllerHelperDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (nonatomic, retain) PXSectionedObjectReference *highlightedMemoryReference;
@property (nonatomic, readonly) PHPhotoLibrary *photoLibrary;
@property (nonatomic, readonly) PXScrollViewController *scrollViewController;
@property (nonatomic, readonly) PXSectionedSelectionManager *selectionManager;
@property (nonatomic, readonly) PXMemoriesSpecManager *specManager;
@property (readonly) Class superclass;
@property (nonatomic, readonly) PXMemoriesFeedTilingLayout *targetLayout;
@property (nonatomic, readonly) PXTilingController *tilingController;
@property (nonatomic, readonly) PXExtendedTraitCollection *traitCollection;

- (void).cxx_destruct;
- (void)_configureLayout:(id)arg1;
- (void)_configureMetrics:(id)arg1;
- (void)_enumerateInsertedItemsInChangeDetails:(id)arg1 withDataSource:(id)arg2 usingBlock:(id /* block */)arg3;
- (void)_generateMemoriesForReason:(unsigned int)arg1;
- (void)_generateMemoriesForReason:(unsigned int)arg1 contextualMemoriesSettings:(id)arg2;
- (void)_handleChangeFromDataSource:(id)arg1 toDataSource:(id)arg2 withChangeDetails:(id)arg3;
- (void)_handleDataSourceChange;
- (void)_handleFinishedRequestingNewMemoriesWithSuccess:(BOOL)arg1 reason:(unsigned int)arg2 error:(id)arg3;
- (void)_handleNewLayoutSnapshot:(id)arg1;
- (void)_handleRefreshCompletionWithResultInformation:(id)arg1 reason:(unsigned int)arg2 error:(id)arg3;
- (void)_handleTraitCollectionChange:(unsigned int)arg1;
- (void)_invalidateLayoutEngine;
- (BOOL)_isRequestingNewMemories;
- (id)_lastUserMemoryGenerationRequestDate;
- (id)_layoutEngine;
- (id)_memoryReferenceInsertedOnChangeToDataSource:(id)arg1 withChangeDetails:(id)arg2;
- (id)_memoryReferenceToScrollToVisible;
- (BOOL)_needsUpdate;
- (id /* block */)_newMemoriesRequestCompletion;
- (int)_refreshRetryCount;
- (id)_scrollFilter;
- (void)_scrollMemoryReferenceToVisible:(id)arg1 animated:(BOOL)arg2;
- (void)_setAnchorMemoryOrigin:(struct CGPoint { double x1; double x2; })arg1;
- (void)_setAnchorMemoryReference:(id)arg1;
- (void)_setLastUserMemoryGenerationRequestDate:(id)arg1;
- (void)_setMemoryReferenceToScrollToVisible:(id)arg1;
- (void)_setNewMemoriesRequestCompletion:(id /* block */)arg1;
- (void)_setRefreshRetryCount:(int)arg1;
- (void)_setRequestingNewMemories:(BOOL)arg1;
- (void)_setSpec:(id)arg1;
- (id)_spec;
- (void)_startRefreshForReason:(unsigned int)arg1;
- (id)_transitionAnimationCoordinator;
- (void)_updateHighlightedIndexPathInLayout;
- (void)_updateHighlightedIndexPathInLayout:(id)arg1;
- (void)_updateIfNeeded;
- (void)_updateLayoutEngineIfNeeded;
- (void)_updateSelectedIndexPathsInLayout;
- (void)_updateSelectedIndexPathsInLayout:(id)arg1;
- (id)actionPresentationMemoryReference;
- (id)activatedMemoryReference;
- (struct CGPoint { double x1; double x2; })anchorMemoryOrigin;
- (id)anchorMemoryReference;
- (BOOL)canRequestNewMemories;
- (BOOL)canRequestNewMemoriesForReason:(unsigned int)arg1;
- (id)currentLayout;
- (id)dataSourceManager;
- (id)delegate;
- (void)didChangeTilingControllerLayout;
- (void)feedViewControllerDidAppear;
- (void)feedViewControllerWillLayoutSubviews;
- (id)highlightedMemoryReference;
- (struct PXSimpleIndexPath { unsigned int x1; int x2; int x3; int x4; })indexPathForMemoryInScrollViewAtPoint:(struct CGPoint { double x1; double x2; })arg1;
- (struct PXSimpleIndexPath { unsigned int x1; int x2; int x3; int x4; })indexPathForMemoryObjectReference:(id)arg1;
- (id)initWithScrollViewController:(id)arg1 photoLibrary:(id)arg2 traitCollection:(id)arg3 tilingControllerConfigurationBlock:(id /* block */)arg4;
- (void)invalidateMetrics;
- (void)layoutEngine:(id)arg1 willGenerateLayoutWithGenerator:(id)arg2 forSection:(unsigned int)arg3;
- (void)layoutEngineDidUpdateLayoutSnapshot:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })memoriesFeedTilingLayout:(id)arg1 contentsRectForItemAtIndexPath:(struct PXSimpleIndexPath { unsigned int x1; int x2; int x3; int x4; })arg2 forAspectRatio:(float)arg3;
- (id)memoriesFeedTilingLayout:(id)arg1 titleFontNameForItemAtIndexPath:(struct PXSimpleIndexPath { unsigned int x1; int x2; int x3; int x4; })arg2;
- (id)memoryInfoAtIndexPath:(struct PXSimpleIndexPath { unsigned int x1; int x2; int x3; int x4; })arg1;
- (id)memoryInfoForMemoryObjectReference:(id)arg1;
- (id)memoryInfoInScrollViewAtPoint:(struct CGPoint { double x1; double x2; })arg1;
- (id)memoryObjectReferenceInScrollViewAtPoint:(struct CGPoint { double x1; double x2; })arg1;
- (id)mutableChangeObject;
- (void)observable:(id)arg1 didChange:(unsigned int)arg2 context:(void*)arg3;
- (id)photoLibrary;
- (void)prepare;
- (void)requestNewMemoriesForReason:(unsigned int)arg1 withCompletion:(id /* block */)arg2;
- (void)requestNewMemoriesWithCompletion:(id /* block */)arg1;
- (void)saveAnchorMemory;
- (void)scrollFilterShouldRequestAdditionalContent:(id)arg1;
- (id)scrollViewController;
- (id)sectionedDataSourceManagerInterestingObjectReferences:(id)arg1;
- (id)selectionManager;
- (void)setActionPresentationMemoryReference:(id)arg1;
- (void)setActivatedMemoryReference:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setHighlightedMemoryReference:(id)arg1;
- (id)specManager;
- (id)targetLayout;
- (id)tilingController;
- (struct CGPoint { double x1; double x2; })tilingController:(id)arg1 initialVisibleOriginForLayout:(id)arg2;
- (void)tilingController:(id)arg1 prepareForChange:(id)arg2;
- (struct CGPoint { double x1; double x2; })tilingController:(id)arg1 targetVisibleOriginForLayout:(id)arg2 proposedVisibleOrigin:(struct CGPoint { double x1; double x2; })arg3;
- (id)tilingController:(id)arg1 tileIdentifierConverterForChange:(id)arg2;
- (id)tilingController:(id)arg1 transitionAnimationCoordinatorForChange:(id)arg2;
- (id)traitCollection;

@end