describe("First test of Busted Framework", function()
    it("Truthy with string", function()
        assert.truthy("yes")
    end)

    it("Truthy with empty table", function()
        local t = {}
        assert.truthy(t)
    end)

    it("Truthy with number", function()
        assert.truthy(111)
    end)

    it("Broken condition with truthy", function()
        assert.truthy(nil)
    end)
end)
