#pragma once
//*******************************************************
// Declaration of the visitor class.
// This class is used to implement the visitor pattern.
//
// As you add AST node types, you must add the forward declaration and
// the virtual Visit function.
// Lab 4 will work without this, BUT Lab 5 will go more smoothly if you
// keep this class current with all your AST node types.


// Forward (incomplete) declarations for all AST node types
class cAstNode;
class cBlockNode;
class cDeclNode;
class cDeclsNode;
class cExprNode;
class cIntExprNode;
class cOpNode;
class cPrintNode;
class cStmtNode;
class cStmtsNode;
class cSymbol;
class cParamsNode;
class cVarDeclNode;
class cStructDeclNode;
class cFuncDeclNode;
class cParamsNode;
class cVarExprNode;
class cProgramNode;
class cBinaryExprNode;
class cIfNode;
class cAssignNode;
class cWhileNode;
class cFuncExprNode;
class cReturnNode;

class cVisitor
{
    public:
        cVisitor() {}

        virtual void VisitAllNodes(cAstNode *node) = 0;

        virtual void Visit(cAstNode *node);
        virtual void Visit(cBlockNode *node);
        virtual void Visit(cDeclNode *node);
        virtual void Visit(cDeclsNode *node);
        virtual void Visit(cExprNode *node);
        virtual void Visit(cIntExprNode *node);
        virtual void Visit(cOpNode *node);
        virtual void Visit(cPrintNode *node);
        virtual void Visit(cProgramNode *node);
        virtual void Visit(cStmtNode *node);
        virtual void Visit(cStmtsNode *node);
        virtual void Visit(cSymbol *node);
        virtual void Visit(cParamsNode *node);
        virtual void Visit(cVarDeclNode *node);
        virtual void Visit(cStructDeclNode *node);
        virtual void Visit(cFuncDeclNode *node);
        virtual void Visit(cFuncExprNode *node);
        virtual void Visit(cVarExprNode *node);
        virtual void Visit(cBinaryExprNode *node);
        virtual void Visit(cIfNode *node);
        virtual void Visit(cAssignNode *node);
        virtual void Visit(cWhileNode *node);
        virtual void Visit(cReturnNode *node);
    protected:
        void PreVisitAllNodes(cAstNode *node);
        void PostVisitAllNodes(cAstNode *node);
        void VisitAllChildren(cAstNode *node);
};
