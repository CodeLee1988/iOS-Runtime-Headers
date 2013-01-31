/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

@class NSNumber, NSString, ISReview;

@interface SUScriptReview : SUScriptObject  {
    ISReview *_review;
}

@property(readonly) NSNumber * adamID;
@property(retain) NSString * body;
@property(readonly) id hasSavedDraft;
@property(retain) NSString * infoURL;
@property(retain) NSString * itemType;
@property(retain) NSString * nickname;
@property(retain) id nicknameIsConfirmed;
@property(retain) NSNumber * rating;
@property(retain) NSString * title;

+ (id)webScriptNameForKeyName:(id)arg1;
+ (id)webScriptNameForSelector:(SEL)arg1;
+ (void)initialize;

- (void)setItemType:(id)arg1;
- (void)setNicknameIsConfirmed:(id)arg1;
- (id)hasSavedDraft;
- (id)initWithReview:(id)arg1;
- (id)nicknameIsConfirmed;
- (id)removeDraft;
- (id)restoreFromDraft;
- (id)saveAsDraft;
- (id)copyReview;
- (void)setNickname:(id)arg1;
- (id)nickname;
- (id)itemType;
- (id)_className;
- (id)scriptAttributeKeys;
- (id)attributeKeys;
- (void)dealloc;
- (id)init;
- (void)setBody:(id)arg1;
- (id)body;
- (id)title;
- (void)setTitle:(id)arg1;
- (void)setInfoURL:(id)arg1;
- (id)infoURL;
- (void)setRating:(id)arg1;
- (id)rating;
- (id)adamID;

@end