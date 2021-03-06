/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 7:09:34 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /Applications/Health.app/Health
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Health/WDAxisDescriptor.h>

@class UIFont, UIColor, CAFilter, NSArray, NSString;

@interface WDCachedAxisDescriptor : NSObject <WDAxisDescriptor> {

	char _alwaysHighlight;
	id _minValue;
	id _maxValue;
	unsigned _labelAlignment;
	UIFont* _highlightedLabelFont;
	UIFont* _unhighlightedLabelFont;
	UIColor* _highlightedLabelColor;
	UIColor* _unhighlightedLabelColor;
	CAFilter* _highlightedLabelFilter;
	CAFilter* _unhighlightedLabelFilter;
	NSArray* _cachedAxisLabels;

}

@property (nonatomic,retain) NSArray * cachedAxisLabels;                       //@synthesize cachedAxisLabels=_cachedAxisLabels - In the implementation block
@property (assign,nonatomic) char alwaysHighlight;                             //@synthesize alwaysHighlight=_alwaysHighlight - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) id minValue;                                      //@synthesize minValue=_minValue - In the implementation block
@property (nonatomic,retain) id maxValue;                                      //@synthesize maxValue=_maxValue - In the implementation block
@property (assign,nonatomic) unsigned labelAlignment;                          //@synthesize labelAlignment=_labelAlignment - In the implementation block
@property (nonatomic,retain) UIFont * highlightedLabelFont;                    //@synthesize highlightedLabelFont=_highlightedLabelFont - In the implementation block
@property (nonatomic,retain) UIFont * unhighlightedLabelFont;                  //@synthesize unhighlightedLabelFont=_unhighlightedLabelFont - In the implementation block
@property (nonatomic,retain) UIColor * highlightedLabelColor;                  //@synthesize highlightedLabelColor=_highlightedLabelColor - In the implementation block
@property (nonatomic,retain) UIColor * unhighlightedLabelColor;                //@synthesize unhighlightedLabelColor=_unhighlightedLabelColor - In the implementation block
@property (nonatomic,retain) CAFilter * highlightedLabelFilter;                //@synthesize highlightedLabelFilter=_highlightedLabelFilter - In the implementation block
@property (nonatomic,retain) CAFilter * unhighlightedLabelFilter;              //@synthesize unhighlightedLabelFilter=_unhighlightedLabelFilter - In the implementation block
-(CAFilter *)unhighlightedLabelFilter;
-(UIFont *)unhighlightedLabelFont;
-(CAFilter *)highlightedLabelFilter;
-(UIFont *)highlightedLabelFont;
-(id)generateAxisLabels;
-(char)alwaysHighlight;
-(void)setAlwaysHighlight:(char)arg1 ;
-(void)setUnhighlightedLabelFilter:(CAFilter *)arg1 ;
-(void)setHighlightedLabelFont:(UIFont *)arg1 ;
-(void)setUnhighlightedLabelFont:(UIFont *)arg1 ;
-(char)assertPropertiesValid;
-(void)setHighlightedLabelFilter:(CAFilter *)arg1 ;
-(NSArray *)cachedAxisLabels;
-(void)setCachedAxisLabels:(NSArray *)arg1 ;
-(id)_labelAtIndex:(unsigned)arg1 ;
-(id)maxValue;
-(id)init;
-(id)minValue;
-(void)setMaxValue:(id)arg1 ;
-(void)setMinValue:(id)arg1 ;
-(id)axisLabels;
-(void)_generateAxisLabels;
-(unsigned)numLabels;
-(Class)expectedDataType;
-(id)positionForLabelAtIndex:(unsigned)arg1 ;
-(id)textForLabelAtIndex:(unsigned)arg1 ;
-(UIColor *)highlightedLabelColor;
-(void)setHighlightedLabelColor:(UIColor *)arg1 ;
-(UIColor *)unhighlightedLabelColor;
-(void)setUnhighlightedLabelColor:(UIColor *)arg1 ;
-(void)invalidateCache;
-(unsigned)labelAlignment;
-(void)setLabelAlignment:(unsigned)arg1 ;
@end

