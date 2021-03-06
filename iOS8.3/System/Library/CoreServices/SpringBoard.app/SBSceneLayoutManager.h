/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, June 24, 2015 at 10:20:33 PM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <SpringBoard/SpringBoard-Structs.h>
@class SBSceneManager;

@interface SBSceneLayoutManager : NSObject {

	SBSceneManager* _manager;

}

@property (nonatomic,readonly) SBSceneManager * manager;              //@synthesize manager=_manager - In the implementation block
-(CGRect)frameForDisplayItem:(id)arg1 inLayout:(id)arg2 ;
-(void)dealloc;
-(SBSceneManager *)manager;
-(id)initWithManager:(id)arg1 ;
@end

