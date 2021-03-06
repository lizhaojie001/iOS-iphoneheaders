/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:27:40 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AddressBookUI/ABCardGroup.h>

@class NSArray, NSString;

@interface ABCardPropertyGroup : ABCardGroup {

	NSArray* _propertyItems;
	NSArray* _displayItems;
	NSArray* _editingItems;
	NSArray* _originalEditingItems;
	BOOL _showActionsWhenEmpty;
	BOOL _isAdded;
	NSString* _property;
	NSArray* _contacts;
	NSArray* _deletedItems;

}

@property (nonatomic,readonly) NSString * property;                              //@synthesize property=_property - In the implementation block
@property (nonatomic,readonly) NSArray * propertyItems;                          //@synthesize propertyItems=_propertyItems - In the implementation block
@property (nonatomic,copy) NSArray * contacts;                                   //@synthesize contacts=_contacts - In the implementation block
@property (assign,nonatomic) BOOL showActionsWhenEmpty;                          //@synthesize showActionsWhenEmpty=_showActionsWhenEmpty - In the implementation block
@property (getter=isMultiValue,nonatomic,readonly) BOOL multiValue; 
@property (getter=isFixedValue,nonatomic,readonly) BOOL fixedValue; 
@property (getter=isMultiLine,nonatomic,readonly) BOOL multiLine; 
@property (nonatomic,readonly) BOOL allowsAdding; 
@property (nonatomic,readonly) BOOL modified; 
@property (assign,nonatomic) BOOL isAdded;                                       //@synthesize isAdded=_isAdded - In the implementation block
@property (nonatomic,retain) NSArray * editingItems; 
@property (nonatomic,retain) NSArray * deletedItems;                             //@synthesize deletedItems=_deletedItems - In the implementation block
+(id)groupForProperty:(id)arg1 contact:(id)arg2 withLinkedContacts:(id)arg3 ;
-(id)displayItems;
-(NSArray *)editingItems;
-(id)_loadPropertyItems;
-(void)setShowActionsWhenEmpty:(BOOL)arg1 ;
-(id)initWithProperty:(id)arg1 contact:(id)arg2 withLinkedContacts:(id)arg3 ;
-(BOOL)isMultiValue;
-(BOOL)isFixedValue;
-(NSArray *)deletedItems;
-(BOOL)modified;
-(id)_nextAvailableSocialService;
-(id)_nextAvailableInstantMessageService;
-(id)_nextAvailableLabel;
-(id)nextAvailableLabel;
-(BOOL)canAddEditingItem;
-(void)setIsAdded:(BOOL)arg1 ;
-(void)reloadDataPreservingChanges:(BOOL)arg1 ;
-(NSArray *)contacts;
-(id)emptyLabeledValue;
-(BOOL)_arrayContainsMaxAllowedItems:(id)arg1 ;
-(void)setEditingItems:(NSArray *)arg1 ;
-(void)setDeletedItems:(NSArray *)arg1 ;
-(void)saveChangesForItems:(id)arg1 ;
-(id)_mergeItems:(id)arg1 forEditing:(BOOL)arg2 ;
-(BOOL)showActionsWhenEmpty;
-(BOOL)isAdded;
-(BOOL)_shoulShowGroupWhenEditing:(BOOL)arg1 ;
-(id)_itemToBeMergedWith:(id)arg1 fromItems:(id)arg2 forEditing:(BOOL)arg3 ;
-(NSArray *)propertyItems;
-(void)_updateNameValuesForItems:(id)arg1 ;
-(BOOL)labelsAreUnique;
-(id)_availableLabelsInLabels:(id)arg1 forItem:(id)arg2 withValueSelector:(SEL)arg3 usedLabelsCount:(long long*)arg4 ;
-(id)supportedLabelsForItem:(id)arg1 ;
-(id)_nextAvailableLabelInLabels:(id)arg1 withValueSelector:(SEL)arg2 ;
-(BOOL)allowsAdding;
-(BOOL)isMultiLine;
-(BOOL)addEditingItem;
-(void)removeEditingItem:(id)arg1 ;
-(void)setContacts:(NSArray *)arg1 ;
-(void)saveChanges;
-(void)dealloc;
-(id)description;
-(NSString *)property;
-(BOOL)isRequired;
@end

