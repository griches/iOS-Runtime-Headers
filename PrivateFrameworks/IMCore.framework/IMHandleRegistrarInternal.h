/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/IMCore.framework/IMCore
 */

@class NSMutableSet, NSMutableDictionary, NSMutableArray;

@interface IMHandleRegistrarInternal : NSObject  {
    NSMutableDictionary *_siblingsMap;
    NSMutableDictionary *_accountSiblingsMap;
    NSMutableDictionary *_existingAccountSiblingsMap;
    NSMutableDictionary *_chatSiblingsMap;
    NSMutableDictionary *_existingChatSiblingsMap;
    NSMutableArray *_allIMHandles;
    NSMutableDictionary *_candidateNamesMap;
    NSMutableDictionary *_usedUniqueNames;
    NSMutableSet *_knownConflictingNames;
    int _nameStyle;
}


- (void)dealloc;

@end
