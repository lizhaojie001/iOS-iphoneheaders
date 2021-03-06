/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:17:12 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AddressBookUI/AddressBookUI-Structs.h>
#import <AddressBookUI/ABChameleonCell.h>

@class ABMultiCellContentView;

@interface ABMultiCell : ABChameleonCell {

	ABMultiCellContentView* _abMultiCellContentView;
	BOOL _editingDisabled;

}

@property (assign,getter=isEditingDisabled,nonatomic) BOOL editingDisabled;              //@synthesize editingDisabled=_editingDisabled - In the implementation block
@property (nonatomic,retain) ABMultiCellContentView * multiCellContentView; 
-(void)setAbCellStyle:(int)arg1 ;
-(void)_addMultiCellContentViewIfNeeded;
-(BOOL)_shouldSwallowTouches:(id)arg1 withEvent:(id)arg2 ;
-(ABMultiCellContentView *)multiCellContentView;
-(void)setMultiCellContentView:(ABMultiCellContentView *)arg1 ;
-(BOOL)isEditingDisabled;
-(void)setEditingDisabled:(BOOL)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)touchesBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesMoved:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesEnded:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesCancelled:(id)arg1 withEvent:(id)arg2 ;
-(void)setEditing:(BOOL)arg1 animated:(BOOL)arg2 ;
@end

