/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

@class UITextField, NSString, <ABPropertyEditingTableViewCellDelegate>;

@interface ABPropertyEditingTableViewCell : UITableViewCell <ABStyleProviding> {
    int _property;
    UITextField *_textField;
    NSString *_placeholder;
    <ABPropertyEditingTableViewCellDelegate> *_delegate;
}

@property int property;
@property BOOL usesLargeFont;
@property(copy) NSString * placeholder;
@property(copy) NSString * value;
@property <ABPropertyEditingTableViewCellDelegate> * delegate;


- (void)setDelegate:(id)arg1;
- (id)delegate;
- (void)dealloc;
- (void)setProperty:(int)arg1;
- (int)property;
- (id)value;
- (void)setValue:(id)arg1;
- (void)setPlaceholder:(id)arg1;
- (BOOL)canResignFirstResponder;
- (BOOL)isFirstResponder;
- (id)placeholder;
- (id)initWithReuseIdentifier:(id)arg1;
- (BOOL)canBecomeFirstResponder;
- (BOOL)becomeFirstResponder;
- (BOOL)resignFirstResponder;
- (void)layoutSubviews;
- (void)setUsesLargeFont:(BOOL)arg1;
- (BOOL)usesLargeFont;
- (void)_resizeAndCenterTextField;
- (id)initWithReuseIdentifier:(id)arg1 property:(int)arg2 delegate:(id)arg3;
- (void)textFieldValueDidChange:(id)arg1;
- (id)styleProvider;

@end
