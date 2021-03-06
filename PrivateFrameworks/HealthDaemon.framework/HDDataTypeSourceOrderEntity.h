/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface HDDataTypeSourceOrderEntity : HDHealthEntity

+ (id)_predicateForSourceID:(id)arg1;
+ (id)createTableSQL;
+ (id)databaseTable;
+ (id)orderedSourceIDsForType:(id)arg1 userOrdered:(BOOL*)arg2 healthDaemon:(id)arg3 error:(id*)arg4;
+ (int)protectionClass;
+ (BOOL)removeSourceID:(id)arg1 healthDaemon:(id)arg2 error:(id*)arg3;
+ (BOOL)saveOrderedSourceIDs:(id)arg1 type:(id)arg2 userOrdered:(BOOL)arg3 healthDaemon:(id)arg4 error:(id*)arg5;

@end
