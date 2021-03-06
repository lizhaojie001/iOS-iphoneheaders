/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:18:59 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <UIKit/UIKit-Structs.h>
@interface UIKBSplitTraits : NSObject {

	int _corners;
	CGRect _leftFrame;
	CGRect _rightFrame;

}

@property (nonatomic,readonly) CGRect leftFrame;               //@synthesize leftFrame=_leftFrame - In the implementation block
@property (nonatomic,readonly) CGRect rightFrame;              //@synthesize rightFrame=_rightFrame - In the implementation block
@property (nonatomic,readonly) int corners;                    //@synthesize corners=_corners - In the implementation block
+(id)traitsWithLeftFrame:(CGRect)arg1 rightFrame:(CGRect)arg2 corners:(int)arg3 ;
-(id)initWithLeftFrame:(CGRect)arg1 rightFrame:(CGRect)arg2 corners:(unsigned)arg3 ;
-(CGRect)leftFrame;
-(CGRect)rightFrame;
-(int)corners;
@end

