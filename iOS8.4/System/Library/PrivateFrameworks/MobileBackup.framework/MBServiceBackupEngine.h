/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:23:40 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/MobileBackup.framework/backupd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <backupd/MBServiceEngine.h>
#import <backupd/MBFileScannerDelegate.h>

@class MBFileScanner, NSMutableSet, MBSBackup, NSSet;

@interface MBServiceBackupEngine : MBServiceEngine <MBFileScannerDelegate> {

	int _mode;
	int _reason;
	int _type;
	MBFileScanner* _fileScanner;
	NSMutableSet* _modifiedDomains;
	MBSBackup* _backup;
	BOOL _fullBackup;
	BOOL _setupEncryption;
	BOOL _cancelDisabled;
	BOOL _cancelPending;
	long long _snapshotID;
	unsigned _keybagID;
	unsigned long long _totalFileChangeCount;
	unsigned long long _totalFileChangeSize;
	unsigned long long _snapshotQuotaReserved;
	NSSet* _keyBagInfo;

}

@property (retain) NSSet * keyBagInfo;              //@synthesize keyBagInfo=_keyBagInfo - In the implementation block
-(id)initWithMode:(int)arg1 reason:(int)arg2 settingsContext:(id)arg3 debugContext:(id)arg4 ;
-(id)cleanupAfterError:(id)arg1 ;
-(id)_backUp;
-(void)_postconditions;
-(id)_tryBackingUp;
-(id)_removeAbortedFiles;
-(id)_commitSnapshot;
-(id)_refreshCache;
-(id)_scanFiles;
-(id)_createBackupAndSnapshot;
-(id)_tryScanning;
-(id)_trySettingUpBackup;
-(id)_addFiles;
-(BOOL)_shouldRollKeyBag;
-(id)_setupVerifyEncryption;
-(BOOL)_shouldVerify;
-(void)disableCancel;
-(void)setKeyBagInfo:(NSSet *)arg1 ;
-(id)_findDeletedFiles;
-(BOOL)_repairRequiredForFile:(id)arg1 ;
-(int)_fileChangeTypeForNewFile:(id)arg1 oldFile:(id)arg2 ;
-(id)_impl_encryptionKeyForFileWithID:(id)arg1 inodeNumber:(unsigned long long)arg2 path:(id)arg3 protectionClass:(int)arg4 error:(id*)arg5 ;
-(id)_encryptionKeyForFileWithID:(id)arg1 inodeNumber:(unsigned long long)arg2 path:(id)arg3 protectionClass:(int)arg4 error:(id*)arg5 ;
-(id)_extendedAttributesForPathFSR:(const char*)arg1 quiet:(BOOL)arg2 error:(id*)arg3 ;
-(id)_encryptionKeyForFile:(id)arg1 error:(id*)arg2 ;
-(id)_snapshotAttributes;
-(id)_addFileChangesToBatch:(id)arg1 ;
-(id)_addBatch:(id)arg1 ;
-(id)_addFileChange:(id)arg1 toBatch:(id)arg2 ;
-(id)_setupAddOfFileChange:(id)arg1 file:(id*)arg2 item:(id*)arg3 ;
-(BOOL)_shouldBackupIgnoringProtectionClass:(id)arg1 domain:(id)arg2 protectionClass:(int)arg3 ;
-(id)_addBatchToService:(id)arg1 fileAuthTokens:(id*)arg2 ;
-(id)_putBatchInChunkStore:(id)arg1 fileAuthTokens:(id)arg2 ;
-(id)_commitBatchToService:(id)arg1 ;
-(BOOL)fileScanner:(id)arg1 isFileAddedOrModified:(id)arg2 ;
-(id)fileScanner:(id)arg1 didFindFile:(id)arg2 ;
-(NSSet *)keyBagInfo;
-(void)cancel;
-(void)dealloc;
-(id)_run;
-(id)run;
-(id)_prepare;
-(void)enableCancel;
-(id)_setupEncryption;
-(int)engineMode;
-(BOOL)shouldCommitIfPossible;
-(id)setup;
-(void)_retry;
@end
