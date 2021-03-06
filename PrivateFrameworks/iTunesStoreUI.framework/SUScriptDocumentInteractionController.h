/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

@class SUScriptFunction, WebScriptObject, NSString;

@interface SUScriptDocumentInteractionController : SUScriptObject  {
    SUScriptFunction *_cancelFunction;
    SUScriptFunction *_openWithFunction;
}

@property(retain) WebScriptObject * cancelFunction;
@property(retain) WebScriptObject * openWithFunction;
@property(copy) NSString * UTI;

+ (id)webScriptNameForKeyName:(id)arg1;
+ (void)initialize;
+ (id)webScriptNameForSelector:(SEL)arg1;

- (id)_openWithFunction;
- (void)setOpenWithFunction:(id)arg1;
- (id)openWithFunction;
- (void)showOpenWithMenuFromNavigationItem:(id)arg1;
- (void)showOpenWithMenuFromDOMElement:(id)arg1;
- (id)_nativeDocumentInteractionController;
- (id)_cancelFunction;
- (void)setCancelFunction:(id)arg1;
- (id)cancelFunction;
- (id)_nativeObject;
- (id)_className;
- (id)scriptAttributeKeys;
- (void)dealloc;
- (void)setUTI:(id)arg1;
- (void)dismissMenuAnimated:(id)arg1;
- (id)UTI;
- (id)attributeKeys;

@end
