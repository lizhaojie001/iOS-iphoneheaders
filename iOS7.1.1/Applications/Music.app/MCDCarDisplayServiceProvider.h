/*
* This header is generated by classdump-dyld 0.2
* on Saturday, June 28, 2014 at 8:59:12 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /Applications/Music.app/Music
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol MCDCarDisplayServiceProvider <NSObject>
@required
-(void)changeRepeatType:(unsigned)arg1;
-(void)changeShuffleType:(unsigned)arg1;
-(void)reloadPlayer:(id)arg1 radioStation:(id)arg2 options:(id)arg3 completion:(/*^block*/ id)arg4;
-(void)reloadPlayer:(id)arg1 mediaQuery:(id)arg2 options:(id)arg3;
-(void)reloadPlayer:(id)arg1 geniusMixPlaylist:(id)arg2 options:(id)arg3;
@end

