/* Generated by RuntimeBrowser on iPhone OS 3.0
   Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

@class NSMutableDictionary, NSSQLEntity, NSString, NSSQLWhereIntermediate, NSSQLLimitIntermediate, NSMutableArray, NSSQLOffsetIntermediate, NSSQLOrderIntermediate, NSSQLSelectIntermediate;



@interface NSSQLFetchIntermediate : NSSQLIntermediate 
{
    NSSQLEntity *_governingEntity;
    NSString *_governingAlias;
    NSString *_correlationToken;
    NSSQLSelectIntermediate *_selectClause;
    NSSQLWhereIntermediate *_whereClause;
    NSSQLLimitIntermediate *_limitClause;
    NSSQLOffsetIntermediate *_offsetClause;
    NSSQLOrderIntermediate *_orderIntermediate;
    NSMutableArray *_joinIntermediates;
    NSMutableDictionary *_joinKeypaths;
}


- (id)initWithScope:(id)arg1;
- (id)initWithEntity:(id)arg1 alias:(id)arg2 inScope:(id)arg3;
- (void)dealloc;
- (id)fetchContext;
- (void)setSelectIntermediate:(id)arg1;
- (id)selectIntermediate;
- (void)setWhereIntermediate:(id)arg1;
- (id)limitIntermediate;
- (void)setLimitIntermediate:(id)arg1;
- (void)setOffsetIntermediate:(id)arg1;
- (void)addJoinIntermediate:(id)arg1 atKeypath:(id)arg2;
- (id)finalJoinForKeypath:(id)arg1;
- (id)joinIntermediates;
- (void)setOrderIntermediate:(id)arg1;
- (id)_generateJoinSQLStringInContext:(id)arg1;
- (id)generateSQLStringInContext:(id)arg1;
- (void)setCorrelationToken:(id)arg1;
- (id)governingAlias;
- (void)setGoverningAlias:(id)arg1;
- (id)governingEntity;
- (void)setGoverningEntity:(id)arg1;
- (id)fetchIntermediateForKeypathExpression:(id)arg1;
- (id)governingAliasForKeypathExpression:(id)arg1;
- (id)governingEntityForKeypathExpression:(id)arg1;
- (BOOL)keypathExpressionIsSafeLHSForIn:(id)arg1;
- (void)selectDistinct;

@end