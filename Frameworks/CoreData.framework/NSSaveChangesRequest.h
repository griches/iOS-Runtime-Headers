/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

@class NSSet;

@interface NSSaveChangesRequest : NSPersistentStoreRequest  {
    NSSet *_insertedObjects;
    NSSet *_updatedObjects;
    NSSet *_deletedObjects;
    NSSet *_optimisticallyLockedObjects;
    void *_reserved1;
    void *_reserved2;
}

+ (void)initialize;

- (id)deletedObjects;
- (id)updatedObjects;
- (id)insertedObjects;
- (void)dealloc;
- (id)init;
- (void)setDeletedObjects:(id)arg1;
- (id)lockedObjects;
- (id)initWithInsertedObjects:(id)arg1 updatedObjects:(id)arg2 deletedObjects:(id)arg3 lockedObjects:(id)arg4;
- (BOOL)hasChanges;
- (unsigned int)requestType;

@end
