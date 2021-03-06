/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:53:48 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/


#import <UIKit/UIKit-Structs.h>
@class NSMutableArray, _UIFlowLayoutSection;

@interface _UIFlowLayoutRow : NSObject {

	NSMutableArray* _items;
	_UIFlowLayoutSection* _section;
	CGSize _rowSize;
	CGRect _rowFrame;
	int _index;
	BOOL _isValid;
	BOOL _complete;
	int _verticalAlignement;
	int _horizontalAlignement;
	BOOL _fixedItemSize;

}

@property (assign,nonatomic) _UIFlowLayoutSection * section;              //@synthesize section=_section - In the implementation block
@property (assign,nonatomic) CGSize rowSize;                              //@synthesize rowSize=_rowSize - In the implementation block
@property (assign,nonatomic) CGRect rowFrame;                             //@synthesize rowFrame=_rowFrame - In the implementation block
@property (assign,nonatomic) int index;                                   //@synthesize index=_index - In the implementation block
@property (nonatomic,readonly) NSMutableArray * items;                    //@synthesize items=_items - In the implementation block
@property (assign,nonatomic) BOOL complete;                               //@synthesize complete=_complete - In the implementation block
@property (assign,nonatomic) BOOL fixedItemSize;                          //@synthesize fixedItemSize=_fixedItemSize - In the implementation block
-(void)dealloc;
-(id)init;
-(void)invalidate;
-(id)snapshot;
-(id)items;
-(id)section;
-(int)index;
-(void)addItem:(id)arg1 ;
-(CGSize)rowSize;
-(void)setRowSize:(CGSize)arg1 ;
-(BOOL)fixedItemSize;
-(void)setFixedItemSize:(BOOL)arg1 ;
-(CGRect)rowFrame;
-(void)setSection:(id)arg1 ;
-(void)setComplete:(BOOL)arg1 ;
-(void)layoutRow;
-(void)setRowFrame:(CGRect)arg1 ;
-(id)copyFromSection:(id)arg1 ;
-(BOOL)complete;
-(void)setIndex:(int)arg1 ;
@end

