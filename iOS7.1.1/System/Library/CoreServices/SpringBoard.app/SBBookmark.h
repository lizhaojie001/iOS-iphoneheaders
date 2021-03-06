/*
* This header is generated by classdump-dyld 0.2
* on Saturday, June 28, 2014 at 1:58:01 AM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SpringBoard/SBLeafIconDataSource.h>

@class UIWebClip;

@interface SBBookmark : NSObject <SBLeafIconDataSource> {

	UIWebClip* _webClip;

}

@property (nonatomic,retain) UIWebClip * webClip;              //@synthesize webClip=_webClip - In the implementation block
+(id)bookmarkWithWebClip:(id)arg1 ;
-(id)icon:(id)arg1 imageWithFormat:(int)arg2 ;
-(id)iconFormattedAccessoryString:(id)arg1 ;
-(unsigned)iconPriority:(id)arg1 ;
-(id)icon:(id)arg1 defaultImageWithFormat:(int)arg2 ;
-(BOOL)iconCanEllipsizeLabel:(id)arg1 ;
-(BOOL)iconAppearsInNewsstand:(id)arg1 ;
-(int)iconProgressState:(id)arg1 ;
-(float)iconProgressPercent:(id)arg1 ;
-(BOOL)iconProgressIsPaused:(id)arg1 ;
-(id)iconBadgeNumberOrString:(id)arg1 ;
-(int)iconAccessoryType:(id)arg1 ;
-(BOOL)iconIsRecentlyUpdated:(id)arg1 ;
-(BOOL)iconAllowsUninstall:(id)arg1 ;
-(BOOL)iconCompleteUninstall:(id)arg1 ;
-(BOOL)iconAllowsLaunch:(id)arg1 ;
-(BOOL)icon:(id)arg1 launchFromLocation:(int)arg2 ;
-(id)webClip;
-(void)setWebClip:(id)arg1 ;
-(id)initWithWebClip:(id)arg1 ;
-(void)deviceUnlockedForFirstTime:(id)arg1 ;
-(id)iconDisplayName:(id)arg1 ;
-(BOOL)allowsUninstall;
-(void)dealloc;
-(id)bundleIdentifier;
-(id)identifier;
@end

